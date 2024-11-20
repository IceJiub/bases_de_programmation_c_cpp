#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 8;
    int tab[size] = {8, 12, 67, 12, 3, 5, 73, 46};
    int n;
    cout << "Tableau avant modif : ";
    displayArray(tab, size);
    cout << "Saisir un entier : ", cin >> n;
    removeValue(tab, &size, n);
    cout << "Tableau après modif : ";
    displayArray(tab, size);
}