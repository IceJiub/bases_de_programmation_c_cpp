#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 8;
    int tab[size];
    fillArrayWithRandNum(tab, size, 1, 100);
    cout << "Tableau : ";
    displayArray(tab, size);
    displayMinMax(tab, size);
}