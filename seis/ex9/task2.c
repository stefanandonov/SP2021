//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>
#include<math.h>
int isPrime (int number, int divisor){ //1 -> prime 0 -> not prime
    if (divisor==((int)sqrt(number)+1)){
        return 1; //we checked all possible divisors and none of them is a divisor of number
    } else {
        if (number%divisor==0){
            return 0;
        } else {
            return isPrime(number, divisor+1);
        }
    }
}

int findNextPrime(int number) {
    if (isPrime(number, 2)){
        return number;
    } else {
        return findNextPrime(number+1);
    }
}

int main (){
    int n;
    scanf("%d", &n);
    int nextPrime = findNextPrime(n+1);
    printf("%d - %d = %d", nextPrime, n, nextPrime-n);
    return 0;
}