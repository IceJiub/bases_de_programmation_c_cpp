#include <iostream>
using namespace std;

bool greaterThan(int num, int X) {
    if (num > X)
        return true;
    else
        return false;
}

int main() {
    cout<< "Donner un nombre entier" <<endl;
    int num; //déclaration de la variable
    cin >> num; // saisie et stockage dans la variable

    cout<< "A quel nombre voulez vous comparer ce nombre ?" <<endl;
    int X;
    cin >> X;
    
    if(greaterThan(num, X)) // est ce que c'est plus grand que 10?
        cout<<"Le nombre est supérieur à 10"<<endl;
    else // pour tous les autres cas (< ou =)
        cout<<"Le nombre n'est pas supérieur à 10"<<endl;
}
