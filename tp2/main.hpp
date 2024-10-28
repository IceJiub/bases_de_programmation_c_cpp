#ifndef MAIN_H
#define MAIN_H

int addGrade();
int mean(int nbGrades);
int max(int a, int b);
int max(int a, int b, int c);
double getPriceWithTaxes(double prix);
double addMargin(double prixHT);
double addVAT(double prixHT);
double addEcoTax(double prix);
bool isPrime(int a);
int findPreviousPrime(int a);
void findTwoPreviousPrime(int nb_prime);
void drawRectangle(int l, int L);
void drawLine(bool line, int L);
void drawSymbol(bool line);

#endif