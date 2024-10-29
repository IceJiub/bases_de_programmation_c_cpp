#include <iostream>
#include "main.hpp"
using namespace std;

int main() {
    double prixHT;

    cout << "Entrez le prix hors taxe du produit : " <<endl;
    cin >> prixHT;

    cout << "Le prix final TTC est : " << getPriceWithTaxes(prixHT) << " euros." << endl;

    return 0;
}