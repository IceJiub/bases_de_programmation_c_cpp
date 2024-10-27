#include <iostream>
#include "main.hpp"
using namespace std;

int mean(int nbGrades) 
{
    int somme = 0;
    for (int i = 1 ; i <= nbGrades ; i++)
        somme += addGrade();
    return somme / nbGrades;
}