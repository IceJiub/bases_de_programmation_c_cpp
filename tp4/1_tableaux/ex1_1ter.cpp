#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 5;
    int grades[5] = {13, 9, 16, 15, 19};
    cout << "Tableau après modification : ";
    displayArray(grades, size);
}