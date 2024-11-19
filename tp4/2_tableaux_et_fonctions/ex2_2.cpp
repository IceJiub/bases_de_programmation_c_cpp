#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 10;
    int tab[size];
    fillArrayWithRandNum(tab, size, 1, 10);
    displayArray(tab, size);
}