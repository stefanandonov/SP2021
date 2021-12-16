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
    int i, n;
    scanf("%d", &n);
    for (i = n + 1;; i++) {
        if (isPrime(i)) {
            printf("%d - %d = %d", i, n, i - n);
            break;
        }
    }
    return 0;
}