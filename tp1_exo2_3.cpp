#include <iostream>

using namespace std;

int main() {
    
    int x;
    int y;

    cout << "Entrez un nombre x : " << endl;
    cin >> x;
    cout << "Entrez un nombre y : " << endl;
    cin >> y;

    if (x < y) {
        cout << x << " est plus petit que " << y << endl;
    }

    else if (x > y) {
        cout << x << " est plus grand que " << y << endl;
    }

    else {
        cout << x << " est égale à " << y << endl;
    }

    return 0;

}