#include <iostream>
using namespace std;

int main() 
{
    int age = 12;
    int *pAge = &age;
    cout << "La valeur de age en direct : " << age << endl;
    cout << "La valeur vers laquelle pointe pAge : " << *pAge << endl;
}