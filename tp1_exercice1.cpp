#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout << "Saisir un nombre : " << endl;
    cin >> n;

    for(int i = 0 ; i < 5 ; i++) {
        for(int k = 0 ; k <= i ; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;

}