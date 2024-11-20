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
int getMax(int array[], int size);
void displayMinMax(int array[], int size);
double mean(double array[], int size);
bool contain(int array[], int size, int value);
int search(int array[], int size, int value);
int count(int array[], int size, int value);
void resetValue(int tab[], int size, int value);
void shiftArray(int tab[], int size, int value);
void shiftArrayFromIndex(int array[], int size, int index);
void removeValue(int tab[], int *size, int value);
void removeDuplicates(int array[], int *size);

#endif