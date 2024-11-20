#include <iostream>
#include <cstdlib>
#include <ctime>
#include "array.hpp"
using namespace std;

void displayArray(int array[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        cout << array[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << endl;
}

void displayArray(double array[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        cout << array[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << endl;
}

void initArray(int array[], int size, int value)
{
    for (int i = 0 ; i < size ; i++)
        array[i] = i*value;
}

void fillArrayWithRandNum(int array[], int size, int min, int max)
{
    srand(time(0));
    for (int i = 0 ; i < size ; i++)
        array[i] = rand() % (max - min + 1) + min;
}

bool isPrime(int a)
{
    if (a == 1)
        return true;
    for (int i = 2 ; i < a ; i++)
        if (a % i == 0)
            return false;
    return true;
}

int getNextPrime(int a)
{
    int i = a + 1;
    while (!isPrime(i))
        i++;
    return i;
}

void fillArrayWithPrimeNumbers(int array[], int size)
{
    array[0] = 1;
    for (int i = 1; i < size; i++)
    {
        array[i] = getNextPrime(array[i-1]);
    }
}

int getMin(int array[], int size)
{
    int min = array[0];
    for (int i = 0 ; i < size ; i++)
        if (array[i] < min)
            min = array[i];
    return min;
}

int getMax(int array[], int size)
{
    int max = array[0];
    for (int i = 0 ; i < size ; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

void displayMinMax(int array[], int size)
{
    cout << "Min : " << getMin(array, size) << endl;
    cout << "Max : " << getMax(array, size) << endl;
}

double mean(double array[], int size)
{
    double sum = 0;
    for (int i = 0 ; i < size ; i++)
        sum += array[i];
    return sum / size;
}

bool contain(int array[], int size, int value)
{
    for (int i = 0 ; i < size ; i++)
        if (array[i] == value)
            return true;
    return false;
}

int search(int array[], int size, int value)
{
    for (int i = 0 ; i < size ; i++)
        if (array[i] == value)
            return i;
    return -1;
}

int count(int array[], int size, int value)
{
    int c = 0;
    for (int i = 0 ; i < size ; i++)
        if (array[i] == value)
            c++;
    return c;
}

void resetValue(int array[], int size, int value)
{
    for (int i = 0 ; i < size ; i++)
    {
        if (array[i] == value)
            array[i] = 0;
    }
}

void shiftArray(int array[], int size, int value)
{
    int index = search(array, size, value);
    for (int i = index ; i < size ; i++)
        if (i + 1 < size)
            array[i] = array[i+1];
}

void removeValue(int array[], int *size, int value)
{
    for (int i = 0 ; i < *size ; i++)
    {
        if (array[i] == value)
        {
            shiftArray(array, *size, value);
            *size = *size - 1;
        }
    }
}