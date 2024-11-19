#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 100;
    int tab[size];
    tab[0] = 1;
    for (int i = 1; i < size; i++)
    {
        tab[i] = getNextPrime(tab[i-1]);
    }
    displayArray(tab, size);
}