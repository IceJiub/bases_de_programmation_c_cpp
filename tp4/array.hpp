#ifndef ARRAY_H
#define ARRAY_H

void displayArray(int array[], int size);
void displayArray(double array[], int size);
void initArray(int array[], int size, int value);
void fillArrayWithRandNum(int array[], int size, int min, int max);
bool isPrime(int a);
int getNextPrime(int a);
void fillArrayWithPrimeNumbers(int array[], int size);
int getMin(int array[], int size);

#endif