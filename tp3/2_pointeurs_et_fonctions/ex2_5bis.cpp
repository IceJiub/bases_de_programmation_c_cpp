#include <iostream>
using namespace std;

bool check(double min, double max)
{
    if (min >= max)
    {
        cout << "Vos nombres ne sont pas corrects." << endl;
        return false;
    }
    return true;
}

void swap (double *min, double *max)
{
    double temp;
    if (*min > *max)
    {
        temp = *min;
        *min = *max;
        *max = temp;
        cout << "min et max inversés automatiquement pour non respect de la consigne." << endl;
    }
}

void modify (double *min, double *max)
{
    *min *= 2;
    *max /= 2;
    if (*min > *max)
    {
        swap(*min, *max);
        cout << "Résultat : min = " << *min << " et max = " << *max;
        cout << "(ces nombres ont été inversés automatiquement suite à la modification)" << endl;
    }
    else
        cout << "Résultat : min = " << *min << " et max = " << *max;
}

int main ()
{
    double min, max;

    cout << "Entrer le min : ";
    cin >> min;
    cout << "Entrer le max : ";
    cin >> max;

    if (!check(min, max))
        swap(&min, &max);
    modify(&min, &max);
}