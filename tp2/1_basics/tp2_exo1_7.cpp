#include <iostream>
using namespace std;

bool isEven(int a) 
{
    return (a % 2) == 0;
}

int main() 
{
    int a;

    cout << "Entrez un nombre : " << endl;
    cin >> a;

    if (isEven(a))
        cout << "Le nombre " << a <<  " est pair." << endl;
    else
        cout << "Le nombre " << a <<  " est impair." << endl;
    return 0;
}