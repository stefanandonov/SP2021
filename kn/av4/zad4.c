//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>

int main (){
    int points;
    scanf("%d", &points);

    if (points>=90){
        printf("10");
    } else if (points>=80){
        printf("9");
    } else if (points>=70){
        printf("8");
    } else if (points>=60){
        printf("7");
    } else if (points>=50){
        printf("6");
    } else {
        printf("5");
    }
    return 0;
}