#include <iostream>
#include "main.hpp"
using namespace std;

int addGrade() 
{
    int note = -1;
    while (note < 0 || note > 20) {
        cout << "Entrez une note entre 0 et 20 : " << endl;
        cin >> note;
    }
    return note;
}

int mean(int nbGrades) 
{
    int somme = 0;
    for (int i = 1 ; i <= nbGrades ; i++)
        somme += addGrade();
    return somme / nbGrades;
}