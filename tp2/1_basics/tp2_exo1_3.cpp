#include <iostream>
using namespace std;

void compareTo10(int num) {
    if (num > 10)
        cout<<"Le nombre est supérieur à 10"<<endl;
    else
        cout<<"Le nombre n'est pas supérieur à 10"<<endl;
}

int main() {
    cout<< "Donner un nombre entier" <<endl;
    int num; //déclaration de la variable
    cin >> num; // saisie et stockage dans la variable
    compareTo10(num);    
}
