//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>

int main (){
    int points;
    scanf("%d", &points);

    int firstDigit = points/10;
    if (firstDigit>=10){
        firstDigit=9;
    }
    if (firstDigit<4){
        firstDigit=4;
    }

    printf("%d", firstDigit+1);
    return 0;
}