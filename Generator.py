from PIL import Image
import os
import datetime

class Character(object):

    led = 8  # 8 leds represent 1 hex
    dx = 20  # width of one led circle
    dy = 20  # height of one led circle

    def __init__(self, c):
        self.name = str(c)

        self.w = self.h = self.size = 0
        self.font = []

    def img_to_arr(self, im):

        #im.show()

        self.w = im.size[0] // self.dx
        self.h = im.size[1] // self.dy
        self.size = self.w * self.h

        for y in range(0, self.h, self.led):
            for x in range(0, self.w):

                str = ''

                for i in range(self.led):
                    from_x = x * self.dx
                    from_y = (y + i) * self.dy
                    to_x = from_x + self.dx
                    to_y = from_y + self.dy

                    circle = im.crop((from_x, from_y, to_x, to_y))

                    #print((from_x, from_y, to_x, to_y))
                    #print(circle.getpixel((self.dx / 2, self.dy / 2)))

                    # get color of the center of the circle
                    if circle.getpixel((self.dx / 2, self.dy / 2))[0] >= 200:  # if R is more than 200 -> on
                        str = '1' + str
                    else:
                        str = '0' + str

                self.font.append('0x{0:0{1}X}'.format(int(str, 2), 2))


class Font(object):
    def __init__(self, font):
        self.name = font.split('\\')[1]

        self.chars = []
        self.size = 6  # start value

        # These will be defined later
        self.first_char = 0
        self.char_cnt = 0
        self.width = 0
        self.height = 0

        self.read_imgs(font)

    def read_imgs(self, path):
        _, _, symbols = next(os.walk(path))

        self.first_char = self.atoi(symbols[0])
        self.char_cnt = len(symbols)

        self.size += self.char_cnt

        for i, s in enumerate(symbols):
            im = Image.open(os.path.join(path, s))

            ch = Character(self.atoi(s))
            ch.img_to_arr(im)

            self.size += ch.w * ch.h
            self.width = max(self.width, ch.w)
            self.height = max(self.height, ch.h)

            self.chars.append(ch)

    def to_file(self):
        template = self.read_template()

        template = template.replace('%fontName', self.name.upper())

        template = template.replace('%fileName', self.name + '.h')
        template = template.replace('%ARIAL_TUR_19', str(datetime.date.today().strftime('%d.%m.%Y')))
        template = template.replace('%size', str(self.size))
        template = template.replace('%width', str(self.width))
        template = template.replace('%height', str(self.height))
        template = template.replace('%firstChar', str(self.first_char))
        template = template.replace('%lastChar', str(self.first_char + self.char_cnt))
        template = template.replace('%charCount', str(self.char_cnt))

        template = template.replace('%defName', self.name.upper())
        template = template.replace('%name', self.name.upper())

        template = template.replace('%binSize', self.getsize())
        template = template.replace('%binWidth', self.to_hex_str(self.width))
        template = template.replace('%binHeight', self.to_hex_str(self.height))
        template = template.replace('%binFirstChar', self.to_hex_str(self.first_char))
        template = template.replace('%binCharCount', self.to_hex_str(self.char_cnt))

        template = template.replace('%fontWidthData', self.fontWidthData())
        template = template.replace('%fontData', self.fontData())

        print(template)

        with open('fonts/' + self.name + '.h', 'w+') as out:
            out.write(template)

    def getsize(self):
        w = self.size // 256
        h = self.size % 256

        return self.to_hex_str(w) + ', ' + self.to_hex_str(h)

    def fontWidthData(self):
        widths = [str(self.to_hex_str(c.w)) for c in self.chars]

        widthData = ''

        full_line = len(widths) // 10  # number of lines with 10 width values

        for i in range(full_line):
            widthData += ', '.join(widths[i:(i + 1) * 10])
            widthData += ',\n\t'

        widthData += ', '.join(widths[full_line * 10:]) + ','

        return widthData

    def fontData(self):
        fontData = ''

        for ch in self.chars:
            fontData += ', '.join(ch.font)
            fontData += ', // '
            fontData += ch.name
            fontData += '\n\t'

        # delete last comma
        fontData = fontData[::-1].replace(',', ' ', 1)[::-1]  # reverse, replace 1st occurence and reverse back

        return fontData

    @staticmethod
    def read_template(file='template.h'):
        with open(file, 'r') as input:
            return ''.join(input.readlines())

    @staticmethod
    def atoi(str):
        return int(str.split('.')[0])

    @staticmethod
    def to_hex_str(num):
        return '0x{0:0{1}X}'.format(num, 2)
