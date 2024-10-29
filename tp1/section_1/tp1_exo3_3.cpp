#include <iostream>
using namespace std;

int main()
{
    int N;
    int multi = 0;

    cout << "Entrez un nombre entier : " << endl;
    cin >> N;

    for (int i = 1 ; i <= 10 ; i ++)
        cout << N << " * " << i << " = " << i * N << endl;

    return 0;
}