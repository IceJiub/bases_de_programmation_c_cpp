#include <iostream>
using namespace std;

void arithmetic(double a, double b, double *somme, double *produit)
{
    *somme = a + b;
    *produit = a * b;
}

int main()
{
    double a, b, somme, produit;

    cout << "Saisir a : ";
    cin >> a;
    cout << "Saisir b : ";
    cin >> b;

    arithmetic (a, b, &somme, &produit);

    cout << "Somme   = " << somme << endl;
    cout << "Produit = " << produit << endl;
}