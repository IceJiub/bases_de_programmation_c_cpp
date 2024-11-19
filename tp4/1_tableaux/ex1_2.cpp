#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int tab1[3] = {1, 2, 3};
    displayArray(tab1, 3);

    double tab2[6] = {1.5, 2.8, 0.7, 0.0, 0.0, 0.0};
    displayArray(tab2, 6);

    tab2[5] = 12.92;
    displayArray(tab2, 6);

    int tab3[5];
    displayArray(tab3, 5); // Affiche des valeurs aléatoires car le tableau n'est pas initialisé
    tab3[0] = 9;
    tab3[1] = 4;
    tab3[2] = 6;
    tab3[3] = 8;
    tab3[4] = 3;
    displayArray(tab3, 5);

    int tab4[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Entrez la valeur " << i + 1 << " : ";
        cin >> tab4[i];
    }
    displayArray(tab4, 3);
}