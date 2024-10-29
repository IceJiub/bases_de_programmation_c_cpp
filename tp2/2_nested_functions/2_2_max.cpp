#include <iostream>
#include "main.hpp"
using namespace std;

int max(int a, int b) 
{
    if (a < b)
        return b;
    return a;
}

int max(int a, int b, int c) 
{
    if (max(a,b) < c)
        return c;
    return max(a,b);
}