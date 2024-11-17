#include <iostream>
using namespace std;

void distributeBonus(double *salaire1, double *salaire2, double *salaire3, double bonus)
{
    double bonus_split = bonus / 3;
    *salaire1 += bonus_split;
    *salaire2 += bonus_split;
    *salaire3 += bonus_split;
}

int main() 
{
    double salaire1, salaire2, salaire3, bonus;

    cout << "Salaire du premier salarié : " << endl;
    cin >> salaire1;
    cout << "Salaire du second salarié : " << endl;
    cin >> salaire2;
    cout << "Salaire du troisième salarié : " << endl;
    cin >> salaire3;
    cout << "Valeur du bonus : " << endl;
    cin >> bonus;

    distributeBonus(&salaire1, &salaire2, &salaire3, bonus);
    cout << "Salaire total des salariés : " << salaire1 << ", " << salaire2 << ", " << salaire3 << endl;
}
