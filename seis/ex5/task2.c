//
// Created by Stefan Andonov on 11/8/21.
// Write a program that computes на y=x^n for given natural number n, n >= 1 and real number x.
//

#include<stdio.h>

int main() {
    int i, n;
    float x, y = 1;
    scanf("%f %d", &x, &n);

//    for (i = 1; i <= n; i++) {
//        y *= x; // y = y * x;
//    }

    while (n>0){
        y *= x;
        --n;
    }

    printf("%.2f", y);

    return 0;
}