//
// Created by Stefan Andonov on 10/27/21.
//

#include<stdio.h>

int main (){
    int number;
    scanf("%d", &number);
    printf("Most significant digit: %d, Least significant digit: %d", number/100, number%10);
    return 0;
}