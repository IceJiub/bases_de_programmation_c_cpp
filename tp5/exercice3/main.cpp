#include <iostream>
#include "Matrix.hpp"
using namespace std;

int main()
{
    Matrix m;
    m.fillMatrix();
    m.display();
    cout << "Somme de la diagonale: " << m.diagSum() << endl;
    return 0;
}
