from Generator import Font
import os

_, folders, _ = next(os.walk('img'))

fonts = []

for f in folders:
    font = Font(os.path.join('img', f))
    font.to_file()
    fonts.append(font)