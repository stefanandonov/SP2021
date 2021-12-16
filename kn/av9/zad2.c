//
// Created by Stefan Andonov on 12/15/21.
// 574, 575, 576, 577
//

#include<stdio.h>

int isPrime(int n, int divisor) { //1prost 0slozen //divisor -> [2,n-1]
    if (divisor == (n)) {
        return 1; //sme gi pominale site mozni deliteli i nitu eden od niv ne bil delitel na n
    } else {
        if (n % divisor == 0) { //sme nashle delitel na brojot n
            return 0;
        } else {
            return isPrime(n, divisor + 1);
        }
    }
}

int findFirstPrime(int n) {
    if (isPrime(n, 2)) {
        return n;
    } else {
        return findFirstPrime(n + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int firstPrimeAfterN = findFirstPrime(n+1);
    printf("%d - %d = %d", firstPrimeAfterN, n, firstPrimeAfterN - n);
    return 0;
}