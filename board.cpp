#include "board.h"
#include <iostream>
board::board()
{
kolor = "";
cout<<"Stworzono obiekt";
}
board::board(const board& wzor){
    kolor = wzor.kolor;
}
void board::zapalona(int g){
    kolor = "niebieski";
    cout<< g;
}
