#include <iostream>
#include "main.hpp"
using namespace std;

void drawRectangle(int l, int L)
{
    for (int i = 1 ; i <= l ; i++)
        if (i == 1 || i == l)
            drawLine(true, L);
        else
            drawLine(false, L);
}

void drawLine(bool border, int L)
{
    for (int i = 1 ; i <= L ; i++)
        if (border || i == 1 || i == L)
            drawSymbol(true);
        else
            drawSymbol(false);
    cout << endl;
}

void drawSymbol(bool border)
{
    if (border)
        cout << "*";
    else
        cout << "^";
}