#include <iostream>
using namespace std;

void getOpposite(int *number)
{
    *number *= -1;
}

int main() 
{
    int nombre;
    cout << "Saisir un nombre : " << endl;
    cin >> nombre;
    getOpposite(&nombre);
    cout << "L'opposé est " << nombre << endl;
}
