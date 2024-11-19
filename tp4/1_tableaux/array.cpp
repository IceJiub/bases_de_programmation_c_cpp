#include <iostream>
#include "main.hpp"
using namespace std;

void displayArray(int array[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        cout << array[i];
        if (i < size - 1)
            cout << ", ";
    }
}