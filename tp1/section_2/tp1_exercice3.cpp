#include <iostream>
using namespace std;

int main() 
{
    double x;
    double y;
    int operation = -1;

    while (operation != 0)
    {
        cout << "Entrez le premier nombre : " << endl;
        cin >> x;
        cout << "Entrez le deuxième nombre : " << endl;
        cin >> y;
        while (operation != 0)
        {
            cout << "Choisissez une opération (0 : quitter, 1 : +, 2 :  -, 3 : *, 4 : /) : " << endl;
            cin >> operation;
            if (operation == 1) 
                cout << "Résultat : " << x + y << endl;
            else if (operation == 2) 
                cout << "Résultat : " << x - y << endl;
            else if (operation == 3)
                cout << "Résultat : " << x * y << endl;
            else if (operation == 4)
                if (y == 0)
                    cout << "Division par 0 impossible." << endl;
                else
                    cout << "Résultat : " << x / y << endl;
            else if (operation > 5 || operation < 0)
                cout << "Opération incorrecte." << endl;
        }
        if (operation == 0)
            cout << "Voulez-vous quitter (0) ou changer les nombres (1) : " << endl;
            cin >> operation;
    }
    cout << "Au revoir." << endl;

    return 0;
}