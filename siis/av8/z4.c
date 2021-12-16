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

int sumOfDigits (int number){
    int sum = 0;
    while (number){
        sum+=number%10;
        number/=10;
    }
    return sum;
}

int main() {
    int i;
    int counter = 0;
    for (i = 1; i < 10000; i++) {
        if (isPrime(i) && isPrime(sumOfDigits(i))) {
            printf("%d\n", i);
            ++counter;
        }
    }
    printf("Counter: %d", counter);
    return 0;
}