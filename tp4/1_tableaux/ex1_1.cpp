#include <iostream>
using namespace std;

int main()
{
    int grades[5] = {13, 9, 16, 15, 19};
    cout << "Valeur du troisième élément : " << grades[2] << endl;
    grades[3] = 14;
    cout << "Tableau après modification : " << grades[0] << ", " << grades[1] << ", " << grades[2] << ", " << grades[3] << ", " << grades[4] << endl;
}