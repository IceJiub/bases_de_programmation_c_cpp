#include <iostream>
#include "Matrix.hpp"
using namespace std;

Matrix::Matrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mMatrix[i][j] = 0;
        }
    }
}

void Matrix::fillMatrix()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cout << "Ligne " << i+1 << ", nombre " << j+1 << ": ", cin >> mMatrix[i][j];
}

void Matrix::display()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << mMatrix[i][j] << " ";
        cout << endl;
    }
}

int Matrix::diagSum()
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += mMatrix[i][i];
    return sum;
}