#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){

    int n = 10000000;
    double *sinval = (double*)malloc(sizeof(double) * n);
    double sum = 0;

    for (int i = 0; i < n; i++){
        sinval[i] = sin(2*M_PI*(i/(double)n));
        sum += sinval[i];
    }

    printf("%lf\n", sum);
}