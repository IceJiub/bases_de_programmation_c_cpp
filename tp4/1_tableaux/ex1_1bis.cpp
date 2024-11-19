#include <iostream>
using namespace std;

int main()
{
    int grades[5] = {13, 9, 16, 15, 19};
    cout << "Valeur du troisième élément : " << grades[2] << endl;
    grades[3] = 14;
    cout << "Tableau après modification : ";
    for (int i = 0 ; i < 5 ; i++)
    {
        cout << grades[i];
        if (i < 4)
            cout << ", ";
    }
}