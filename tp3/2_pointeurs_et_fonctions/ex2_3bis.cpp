#include <iostream>
using namespace std;

bool isPositive(double number)
{
    if (number > 0)
        return true;
    return false;
}

void modify(double *number)
{
    if (isPositive(*number))
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
