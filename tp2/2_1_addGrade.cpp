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