#include <iostream>
#include "array.hpp"
using namespace std;

void displayArray(int array[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        cout << array[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << endl;
}

void displayArray(double array[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        cout << array[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << endl;
}

void initArray(int array[], int size, int value)
{
    for (int i = 0 ; i < size ; i++)
        array[i] = i*value;
}