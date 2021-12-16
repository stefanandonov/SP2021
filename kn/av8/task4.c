//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>
#include<math.h>

int isPrime(int number) {
    int i;
    for (i = 2; i <= (int) sqrt(number); i++) {
        if (number % i == 0)
            return 0; //this number it's not a prime number (it has a divisor different that 1 or itself)
    }
    return 1;
}

int main() {
    int i;
    int count = 0;
    for (i = 1; i <= 998; i++) {
        if (isPrime(i) && isPrime(i+2)) {
            printf("(%d %d)\n", i, i+2);
            ++count;
        }
    }
    printf("Count: %d", count);
    return 0;
}