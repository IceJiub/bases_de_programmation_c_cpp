#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 15;
    int tab[size];
    int n;
    fillArrayWithRandNum(tab, size, 1, 100);
    cout << "Tableau : ";
    displayArray(tab, size);
    cout << "Saisir un entier : ", cin >> n;
    if (contain(tab, size, n))
        cout << n << " est dans le tableau." << endl;
    else
        cout << n << " n'est pas dans le tableau." << endl;
}