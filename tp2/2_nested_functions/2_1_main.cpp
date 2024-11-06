#include <iostream>
#include "main.hpp"
using namespace std;

int main()
{
    int nbGrades;
    int moyenne;

    cout << "Entrez le nombre de notes : " <<endl;
    cin >> nbGrades;
    moyenne = mean(nbGrades);
    cout << "La moyenne est : " << moyenne << endl;
}