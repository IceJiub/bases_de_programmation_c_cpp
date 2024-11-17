#include <iostream>
using namespace std;

void addOne ( int *number )
{
    *number = *number +1;
}

int main()
{
    int age;
    cout<<"Quel âge avez vous : ";
    cin >> age;
    addOne(&age);
    cout<<"Votre âge l'an prochain : "<< age<<endl;
}
