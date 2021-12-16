//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

double func(int n) {
    if (n == 1 || n == 2) {
        return n;
    } else {
        return ((n - 1.0) / n) * func(n - 1) + (1.0 / n) * func(n - 2);
    }
}

int main() {
    int n = 11;
    printf("%.10f", func(n));
    return 0;
}