#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 100;
    int tab[size];
    fillArrayWithPrimeNumbers(tab, size);
    displayArray(tab, size);
}