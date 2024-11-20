#include <iostream>
#include "../array.hpp"
using namespace std;

int main()
{
    int size = 12;
    int usersID [size] = { 5, 7, 5, 9, 1, 3, 4, 7, 4, 4, 4, 8 };    
    int n;
    cout << "Tableau avant modif : ";
    displayArray(usersID, size);
    removeDuplicates(usersID, &size);
    cout << "Tableau après modif : ";
    displayArray(usersID, size);
}