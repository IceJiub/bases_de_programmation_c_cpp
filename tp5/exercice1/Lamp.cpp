#include <iostream>
#include "Lamp.hpp"
using namespace std;

Lamp::Lamp()
{
    mIsOn = false;
    mColor = 0;
}

Lamp::Lamp(bool isOn)
{
    mIsOn = isOn;
    mColor = 0;
}

Lamp::Lamp(int color)
{
    if (color == 5 || color == 4)
        mColor = 0;
    else
        mColor = color;
    mIsOn = false;
}

Lamp::Lamp(bool isOn, int color)
{
    if (color < 0 || color > 5)
        mColor = 0;
    else
        mColor = color;
    mIsOn = isOn;
    
}

void Lamp::printColor()
{
    if (!mIsOn)
        cout << "La lampe est éteinte. " << endl;
    else
        if(mColor == 0)
            cout << "Couleur blanche" << endl;
        else if (mColor == 1)
            cout << "Couleur rouge" << endl;
        else if (mColor == 2)
            cout << "Couleur vert" << endl;
        else if (mColor == 3)
            cout << "Couleur jaune" << endl;
        else if (mColor == 4)
            cout << "Couleur bleu" << endl;
        else if (mColor == 5)
            cout << "Couleur violet" << endl;  
}

bool Lamp::isOn()
{
    return mIsOn;
}

void Lamp::switchOn()
{
    mIsOn = !mIsOn;
}

void Lamp::changeColor()
{
    if (!mIsOn)
        cout << "La lampe est éteinte." << endl;
    else
        mColor = mColor + 1;
        if (mColor > 5)
            mColor = 0;
}