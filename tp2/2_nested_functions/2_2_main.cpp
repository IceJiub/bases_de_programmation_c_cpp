#include <iostream>
#include "main.hpp"
using namespace std;

int main() {
    int a, b, c;

    cout << "Entrez le premier nombre : " <<endl;
    cin >> a;

    cout << "Entrez le second nombre : " <<endl;
    cin >> b;

    cout << "Entrez le troisième nombre : " <<endl;
    cin >> c;

    cout << "Le plus grand nombre est : " << max(a,b,c) << endl;

    return 0;
}