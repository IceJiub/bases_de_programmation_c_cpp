#include <iostream>
#include "main.hpp"
using namespace std;

double getPriceWithTaxes(double prix)
{
    return addEcoTax(addVAT(addMargin(prix)));
}

double addMargin(double prixHT)
{
    return prixHT*1.3;
}

double addVAT(double prixHT)
{
    return prixHT*1.2;
}

double addEcoTax(double prix)
{
    return prix+1.5;
}