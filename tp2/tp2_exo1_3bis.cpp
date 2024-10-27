#include <iostream>
using namespace std;

void compareToX(int num, int X) {
    if (num > X)
        cout << "Le nombre est supérieur à " << X << endl;
    else
        cout << "Le nombre n'est pas supérieur à " << X << endl;
}

int main() {
    cout << "Donner un nombre entier" << endl;
    int num; //déclaration de la variable
    cin >> num; // saisie et stockage dans la variable

    cout << "A quel nombre voulez vous comparer ce nombre ?" << endl;
    int X;
    cin >> X;
    
    compareToX(num, X);
    return 0;       
}
