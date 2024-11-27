#include <iostream>
#include "Rectangle.hpp"
using namespace std;

int main()
{
    double width, height;
    cout << "Largeur du rectangle : ", cin >> width;
    cout << "Longueur du rectangle : ", cin >> height;

    Rectangle r1(width, height);
    cout << "Surface : " << r1.getArea() << endl;
    if (r1.isSquare())
        cout << "La forme est un carré" << endl;
    else
        cout << "La forme n'est pas un carré" << endl;
    return 0;
}
