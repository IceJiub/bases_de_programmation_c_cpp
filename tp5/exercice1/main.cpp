#include <iostream>
#include "Lamp.hpp"
using namespace std;

int main()
{

    Lamp l6(true, 4);
    l6.printColor();
    l6.changeColor();
    l6.printColor();

    Lamp l7(false, 4);
    l7.printColor();
    l7.switchOn();
    l7.printColor();
    
    return 0;
}