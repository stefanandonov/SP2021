//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int sumOfHalves(int number) {
    return number % 100 + number / 100;
}

int main() {
    int i;
    int counter = 0;
    for (i = 1000; i < 10000; i++) {
        if (i % sumOfHalves(i) == 0) {
            printf("%d\n", i);
            ++counter;
        }
    }
    printf("Counter: %d\n", counter);
    return 0;
}