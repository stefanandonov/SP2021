//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int newNumber(int number) {
    return number % 100 + number / 100;
}

int main() {
    int i;
    for (i = 1000; i < 10000; i++) {
        if (i % newNumber(i) == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}