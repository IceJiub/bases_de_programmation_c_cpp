#include <iostream>
using namespace std;

int main()
{
    int N;
    int somme = 0;

    cout << "Entrez un nombre entier : " << endl;
    cin >> N;

    for (int i = 1 ; i <= N ; i ++)
        somme += i;

    cout << "La somme des entiers de 1 à " << N << " est " << somme << endl;

    return 0;
}