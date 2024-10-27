#include <iostream>
#include "main.hpp"
using namespace std;

int main() {
    
    int l, L;
    cout << "Saisir la longueur: " << endl;
    cin >> l;
    cout << "Saisir la largeur: " << endl;
    cin >> L;

    drawRectangle(l, L);

    return 0;
}