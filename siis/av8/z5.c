//
// Created by Stefan Andonov on 12/9/21.
//
#include<stdio.h>

int isPrime(int number) {
    int i;
    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i;
    int counter = 0;
    for (i = 1; i <= 998; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("(%d, %d)\n", i, i+2);
            ++counter;
        }
    }
    printf("Counter --> %d", counter);
    return 0;
}
