#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 6;
    double tab[size];
    for (int i = 0 ; i < size ; i++)
        cout << "Entrez la note " << i+1 << " : ", cin >> tab[i];
    cout << "Tableau : ";
    displayArray(tab, size);
    cout << "Moyenne : " << mean(tab, size) << endl;
}