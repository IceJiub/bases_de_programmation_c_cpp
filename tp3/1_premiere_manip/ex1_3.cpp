#include <iostream>
using namespace std;

int main() 
{
    int age;
    int *pAge = &age;
    cout << "Entrez votre age : " << endl;
    cin >> age;
    *pAge = 25;
    cout << "La valeur de age : " << age << endl;
}