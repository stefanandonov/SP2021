//
// Created by Stefan Andonov on 11/8/21.
//Write a program that will print all 4-digit numbers
// in which the sum of the three least significant digits is equal to the most significant digit.
// 4112 -> 4 == (1+1+2)
//

#include<stdio.h>

int main (){
    int i;
    for (i=1000;i<10000;i++){
        int mostSignificant = i / 1000;
        int sumOfLeastThreeSignificant = i%10 + i/10%10 + i/100%10;
        if (mostSignificant == sumOfLeastThreeSignificant){
            printf("%d\n", i);
        }
    }
    return 0;
}