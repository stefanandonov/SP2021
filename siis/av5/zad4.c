//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main() {
    int i;
    int mostSignificant,sumOfLeast3Significant;
    for (i = 1000; i < 10000; i++) {
        mostSignificant = i / 1000;
        //                          1234->4
        //                          1234-> 123 -> 3
        //                          1234-> 12 -> 2
        sumOfLeast3Significant = i % 10 + i / 10 % 10 + i / 100 % 10;
        if (mostSignificant == sumOfLeast3Significant){
            printf("%d\n", i);
        }
    }
    return 0;
}