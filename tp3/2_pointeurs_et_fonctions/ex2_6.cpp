#include <iostream>
using namespace std;

void sort(int *a, int *b, int *c)
{
    if (*a < *b || *a < *c)
        if (*b < *c)
            swap(*a,*c);
        else
            swap(*a,*b);
    if (*b < *c)
        swap(*b,*c);
}

void swap(int *a, int *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b, c;

    cout << "Valeur de a : ";
    cin >> a;
    cout << "Valeur de b : ";
    cin >> b;
    cout << "Valeur de c : ";
    cin >> c;

    sort (&a, &b, &c);
    
    cout << "Après tri : a = " << a << " , b = " << b << ", c = " << c << endl;
}