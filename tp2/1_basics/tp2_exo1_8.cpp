#include <iostream>
using namespace std;

int factorial(int a) 
{
    int somme = 1;
    for (int i = 1 ; i <= a ; i++)
        somme *= i;
    return somme;
}

int main()
{
    int a;

    cout << "Entrez un nombre : " << endl;
    cin >> a;
    cout << "La factorielle de " << a << " est " << factorial(a) << "." << endl;

    return 0;
}
