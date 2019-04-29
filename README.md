# FontGenerator
Font Generator for GLCD (Graphical LCD/P10)

* What is it for?

This code allows one to generate font (in ".h" format) for GLCD, in my specific case for P10 modules. Here is another font creator 
I found: https://drive.google.com/file/d/1Rk0jiC92VgQoSqBKkxYSF7xHr8HOguUs/view

It is possible to create font just by clicking to needed cells and it is automatically generates code for you. The reason I did not 
use that program was that, there were too many characters and different fonts I needed to create, and it would've taken me forever
to finish my project. 

I was supposed to re-create already given font:
![Sample from FK Show 4.2.0.0](https://github.com/mmzeynalli/FontGenerator/blob/master/sample.JPG?raw=true)

It was troublesome to copy dot-by-dot given all those characters with different size and fonts. Instead, I came up
with solution to generate code, given images of characters.

* How to use it?

Just take screeshots of characters and save them in folder img/Font_Name. Name files with their ASCII value, with .png or .jpg
format. Characters should be in order, without missing character in between (if you dont want some characters to be generated,
put empty character image).
