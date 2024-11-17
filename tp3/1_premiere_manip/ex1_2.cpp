#include <iostream>
using namespace std;

int main() 
{
    int age = 18;
    int *pAge = &age;
    *pAge = 25;
    cout << "La valeur de age : " << age << endl;
}