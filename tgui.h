/* 
Author: Diwakar phuyal
Github: github.com/diwacreation3

*/
/* simple interactive console header file  */
// this project is under-development 

#include<windows.h>
void Position(int x, int y){
COORD c;
c.X= x; //horizontal coordinate Row
c.Y = y; //vertical cordinate Column
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}
/* 
use coordinate from (10,10) to (50,50)

*/ 


