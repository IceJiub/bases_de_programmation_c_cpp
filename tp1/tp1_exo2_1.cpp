#include <iostream>

using namespace std;

int main() {

    int x;

    cout << "Entrez un nombre x : " << endl;
    cin >> x;

    if (x < 10)
        cout << x << " est inférieur à " << 10 << endl;
    else if (x > 10)
        cout << x << " est supérieur à " << 10 << endl;
    else
        cout << x << " est égale à " << 10 << endl;

    return 0;

}