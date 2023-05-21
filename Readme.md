# Terminal GUI
#### This project is under development 🛠
<b>Contribution help alots. 🥰 </b>
<br>
This only works in windows

### Story 😀 <br>
Hey 👋 I am computer science student and I'm currently on  1st year of my university. First of all I'm one of the lazy person and i was bored of executing c programs inside boring console. I thought can't i run my programs in Graphical User Interface(GUIs). I done some research and found **GTK+** but it was throwing lot's of error on my windows laptop and i found **<windows.h>** header file was far beyond from my capabilities. 
And i came up with idea, why not customizing the console itself. I done some research about it and done some small stuffs. 
## Goal ⛳ 

1. Changing console color ✔
2. Decorating screen with symbols ✔
3. Listening mouse event
4. providing gui like experience inside console 

## How to use 🤔
``` git
git clone 
```
Copy headre file inside project folder and import 
``` c
#include "tgui.h"
```
#### changing cursor position 
use this
``` c
//example 
Position(30,4); 
```
Here is the example:-
 <br>
![](/snap/snap-2.png) 
<br>


where 30 is x and 4 is y which represents x,y cordinate of console. 
In sort X is Column and Y is Row
## About header file 👀
``` c
#include<windows.h>

void Position(int x, int y){
COORD c;
c.X= x; //horizontal coordinate Column
c.Y = y; //vertical cordinate row 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}
```
## Color in console 🌈
Example Code:
``` c 
#include<stdio.h>
#include<tgui.h>
int main(){
system("color B");
printf("\t\t Wow color has changed to Light Aqua");
return 0;
}
```
### Colors

| Code | Color | Code  | Color |
| :--- | :----:|  :---:| ----  |
| 0    | Black |  8    | Gray  |
| 1    | Blue  | 9     | Light Blue  |
| 2    | Green | A     | Light Green |
| 3    | Aqua  | B     | Light Aqua  |
| 4    | Red   | C     | Light Red   |
| 5    | Purple| D     | Light Purple|
| 6    | Yellow| E     | Light Yellow|
| 7    | White | F     | Bright White |

#### How to use 👀
``
Code:-
``
``` c
system("color D");
```



## Customize Console output

Example Code for pattern :-
```c
Printf("\xb0"); //for pattern printing 
Printf("\xb1"); //for pattern printing
Printf("\xb2 \xb3"); 
Printf("\xdb"); //for pattern printing 
```
##### Checkout example.c
#### Images 

![](/snap/snap-1.png "console")
<br>
<br>
![](/snap/snap.png "console")






