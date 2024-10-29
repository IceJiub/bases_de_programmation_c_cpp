#include <iostream>
using namespace std;

int addOne( int nombre )
{
    nombre = nombre + 1;
    return nombre;
}

int main()
{
    cout << "Donner un nombre entier" << endl;
    int num; //déclaration de la variable
    cin >> num; // saisie et stockage dans la variable
    cout << addOne(num) << endl;
}