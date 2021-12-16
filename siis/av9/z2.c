//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int isPrime(int number, int divisor) {
    if (divisor == number) {
        return 1;
    } else {
        if (number % divisor == 0) {
            return 0;
        } else {
            return isPrime(number, divisor + 1);
        }
    }
}

int findNextPrime(int number) {
    if (isPrime(number, 2))
        return number;
    else
        return findNextPrime(number+1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", findNextPrime(n) - n);
    return 0;
}