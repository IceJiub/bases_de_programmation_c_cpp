#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));  // Initialise le générateur aléatoire
    
    int mysteryNumber = rand() % 100 + 1;  // Nombre entre 1 et 100
    int N = 0;
    int nb_essais = 0;

    cout << "Trouvez le nombre mystère !" << endl;

    while (N != mysteryNumber) 
    {
        nb_essais++;
        cout << "Essais " << nb_essais << " : ";
        cin >> N;
        if (N < mysteryNumber)
            cout << "Le nombre mystère est plus grand que " << N << "." << endl;
        else
            cout << "Le nombre mystère est plus petit que " << N << "." << endl;
    }

    cout << "Bravo, le nombre mystère était bien " << N << " et vous l'avez trouvé en " << nb_essais << " essais !" << endl;

    return 0;
}