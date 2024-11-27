#include <iostream>
#include "Rectangle.hpp"
using namespace std;

Rectangle::Rectangle()
{
    mHeight = 0;
    mWidth = 0;
}

Rectangle::Rectangle(double height, double width)
{
    mHeight = height;
    mWidth = width;
}

double Rectangle::getHeight()
{
    return mHeight;
}

double Rectangle::getWidth()
{
    return mWidth;
}

double Rectangle::getArea()
{
    return mHeight * mWidth;
}

bool Rectangle::isSquare()
{
    return mHeight == mWidth;
}