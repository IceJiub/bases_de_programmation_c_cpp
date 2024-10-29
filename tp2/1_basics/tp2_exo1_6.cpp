#include <iostream>
using namespace std;

int sum(int a, int b) 
{
    return a + b;
}

int main() 
{
    int a, b;

    cout << "Entrez le premier nombre : " << endl;
    cin >> a;
    cout << "Entrez le second nombre : " << endl;
    cin >> b;

    cout << "La somme est : " << sum(a,b) << endl;

    return 0;
}