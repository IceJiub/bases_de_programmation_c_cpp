#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 15;
    int tab[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n;
    cout << "Tableau : ";
    displayArray(tab, size);
    cout << "Saisir un entier : ", cin >> n;
    cout << n << " est présent " << count(tab, size, n) << " fois." << endl;
}