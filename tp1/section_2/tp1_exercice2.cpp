#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout << "Saisir un nombre : " << endl;
    cin >> n;

    for(int i = 1 ; i <= n ; i++) {
        if (i == 1 || i == n) {
            for(int j = 1 ; j <= n ; j++)
                cout << "*";
        }
        else {
            cout << "*";
            for(int k = 1 ; k <= n-2 ; k++)
                cout << " ";
            cout << "*";
        }
        cout << "\n";
    }

    return 0;

}