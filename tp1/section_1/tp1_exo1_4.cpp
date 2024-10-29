#include <iostream>

using namespace std;

int main() {

    double x;
    double y;

    cout << "Entrez un nombre x : " << endl;
    cin >> x;
    cout << "Entrez un nombre y : " << endl;
    cin >> y;

    cout << "La somme est égale à : " <<  x + y << endl;
    cout << "La soustraction est égale à : " << x - y << endl;
    cout << "La multiplication est égale à : " << x * y << endl;
    cout << "La division est égale à : " << x / y << endl;

    return 0;

}