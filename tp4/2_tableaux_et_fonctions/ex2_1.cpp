#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    // ex1_3
    int size = 100;
    int tab[size];

    displayArray(tab, size);

    initArray(tab, size, 1);
    displayArray(tab, size);

    // ex1_4
    int tab2[size];
    initArray(tab, size, 2);
    displayArray(tab, size);

}