#include <iostream>
using namespace std;

int main() 
{
    double price = 100.50;
    bool isActive = true;
    double *pPrice = &price;
    bool *pIsActive = &isActive;

    *pPrice = 150.75;
    *pIsActive = false;

    cout << "La valeur de price : " << price << endl;
    cout << "La valeur de isActive : " << isActive << endl;
}