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

void modify (double *min, double *max)
{
    *min *= 2;
    *max /= 2;
    cout << "Résultat : min = " << *min << " et max = " << *max;

    if (*min < *max) {
        cout << " (ils respectent l'ordre)." << endl;
    } else {
        cout << " (ils ne respectent pas l'ordre)." << endl;
    }
}

int main() 
{
    double min, max;

    cout << "Entrer le min : ";
    cin >> min;
    cout << "Entrer le max : ";
    cin >> max;

    if (!check(min, max))
    {
        cout << "Entrer le min : ";
        cin >> min;
        cout << "Entrer le max : ";
        cin >> max;
    }

    modify(&min, &max);
}