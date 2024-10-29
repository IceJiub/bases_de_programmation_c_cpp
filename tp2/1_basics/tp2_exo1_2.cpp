#include <iostream>
using namespace std;

void display(int num)
{
    cout << num << endl;
}

int main()
{
    cout<< "Donner un nombre entier" <<endl;
    int num; //déclaration de la variable
    cin >> num; // saisie et stockage dans la variable
    display(num);
}