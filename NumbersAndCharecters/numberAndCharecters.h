#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <limits.h>
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"
using namespace std;
int* multiply(int *A, int m, int *B, int n);
int longestNonRepeatingSubstring(const char *string, int len);
/* Print n as a binary number */
void printbitssimple(uint8_t n);
double squareroot(double input);
