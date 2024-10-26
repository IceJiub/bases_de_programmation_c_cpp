#include <iostream>

using namespace std;

int main() {
    
    int x;

    cout << "Entrez un nombre x : " << endl;
    cin >> x;

    if (x % 2 == 0) {
        cout << x << " est pair." << endl;
    }
    else {
        cout << x << " est impair." << endl;
    }

    return 0;

}