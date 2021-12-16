//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

long factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", factorial(n));
    return 0;
}