#include <iostream>

using namespace std;

int main() {
    
    double x;
    double y;
    int operation;

    cout << "Entrez le premier nombre : " << endl;
    cin >> x;
    cout << "Entrez le deuxième nombre : " << endl;
    cin >> y;
    cout << "Choisissez une opération (1 : +, 2 :  -, 3 : *, 4 : /) : " << endl;
    cin >> operation;


    if (operation == 1) {
        cout << "Résultat : " << x + y << endl;
    }

    else if (operation == 2) {
        cout << "Résultat : " << x - y << endl;
    }

    else if (operation == 3) {
        cout << "Résultat : " << x * y << endl;
    }

    else if (operation == 4) {
        if (y == 0) {
            cout << "Division par 0 impossible." << endl;
        }
        else {
            cout << "Résultat : " << x / y << endl;
        }
    }

    else {
        cout << "Opération incorrecte." << endl;
    }

    return 0;

}