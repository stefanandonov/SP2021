//
// Created by Stefan Andonov on 11/8/21.
// Write a program that for unknown count of integers read
// from SI will find the number with maximum value. The program stops when the reading of integer fails.
//


#include<stdio.h>

int main() {
    int number;
    int max;
    int flag = 1;

//    scanf("%d", &number);
//    max = number;

    while (scanf("%d", &number)) {

        if (number>100) {
            continue;
        }

        if (flag) {
            max = number;
            flag = 0;
        }

        if (number > max) {
            max = number;
        }
    }

    printf("%d", max);
    return 0;
}
