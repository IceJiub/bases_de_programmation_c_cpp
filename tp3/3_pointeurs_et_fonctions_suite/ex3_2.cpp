#include <iostream>
using namespace std;

void minMax(int a, int b, int c, int *min, int *max)
{
    if (a > b && a > c)
    {
        *max = a;
        if (b < c)
            *min = b;
        else
            *min = c;
    }
    else if (b > a && b > c)
    {
        *max = b;
        if (a < c)
            *min = a;
        else
            *min = c;
    }
    else
    {
        *max = c;
        if (b < a)
            *min = b;
        else
            *min = a;
    }
}

int main()
{
    int a, b, c, min, max;

    cout << "Valeur de a : ";
    cin >> a;
    cout << "Valeur de b : ";
    cin >> b;
    cout << "Valeur de c : ";
    cin >> c;

    minMax(a, b, c, &min, &max);

    cout << "Le minimum vaut " << min << " et le maximum vaut " << max << "." << endl;
}