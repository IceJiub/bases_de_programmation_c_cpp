#include <iostream>
#include "main.hpp"
using namespace std;

bool isPrime(int a)
{
    if (a == 0)
        return false;
    else 
        for (int i = 2 ; i < a ; i++)
            if (a % i == 0)
                return false;
    return true;
}

int findPreviousPrime(int a)
{
    int i;

    for (i = a - 1 ; i >= 1 ; i--)
        if (isPrime(i))
            break;
    return i;
}

void findTwoPreviousPrime(int nb_prime)
{
    int a = findPreviousPrime(nb_prime);
    int b = findPreviousPrime(a);

    if (a == 0)
        cout << "Pas de nombre premier avant " << nb_prime << endl;
    else if (a != 0 && b == 0)
        cout << "Nombre premier avant " << nb_prime << " est : " << a << endl;
    else
        cout << "Nombre premier avant " << nb_prime << " est : " << a << " et " << b << endl;
}
