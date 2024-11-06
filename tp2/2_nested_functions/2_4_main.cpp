#include <iostream>
#include "main.hpp"
using namespace std;

int main() 
{
    int nb_prime;

    cout << "Entrez un nombre : " <<endl;
    cin >> nb_prime;

    findTwoPreviousPrime(nb_prime);
}