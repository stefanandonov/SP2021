//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int n = 123456;
    printf("%d", sumOfDigits(n));
    return 0;
}