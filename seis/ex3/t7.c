//
// Created by Stefan Andonov on 11/2/21.
//

#include<stdio.h>

int main (){
    int number;
    scanf("%d", &number);

    printf("Most significant digit is %d, and least significant digit is %d.",
           number/100,
           number%10);
    return 0;
}