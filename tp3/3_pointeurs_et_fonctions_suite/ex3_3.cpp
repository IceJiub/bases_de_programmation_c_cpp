#include <iostream>
using namespace std;

void logic(bool a, bool b, bool *AND, bool *OR, bool *XOR)
{
    if (a && b)
    {
        *AND = true;
        *OR = true;
        *XOR = false;
    }
    else if (!a && !b)
    {
        *AND = false;
        *OR = false;
        *XOR = false;
    }
    else
    {
        *AND = false;
        *OR = true;
        *XOR = true;
    }
}

int main()
{
    bool a, b, AND, OR, XOR;

    cout << "Première valeur : ";
    cin >> a;
    cout << "Second valeur : ";
    cin >> b;

    logic(a, b, &AND, &OR, &XOR);

    cout << "Résultats : " << endl;
    cout << "AND : " << AND << endl;
    cout << "OR : " << OR << endl;
    cout << "XOR : " << XOR << endl;
}