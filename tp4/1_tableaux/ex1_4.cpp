#include <iostream>
#include "array.hpp"
using namespace std;

int main()
{
    int size = 100;
    int tab[size];
    displayArray(tab, size);
    for (int i = 0; i < size; i++)
        tab[i] = i*2;
    displayArray(tab, size);
}