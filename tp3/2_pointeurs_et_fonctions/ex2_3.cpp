#include <iostream>
using namespace std;

void modify(double *number)
{
    if (*number > 0)
        *number /= 2;
    else
        *number *= 3;
}

int main() 
{
    double nombre;
    cout << "Saisir un nombre : " << endl;
    cin >> nombre;
    modify(&nombre);
    cout << "Valeur finale : " << nombre << endl;
}
