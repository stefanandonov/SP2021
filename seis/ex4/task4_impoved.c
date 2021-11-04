//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main (){
    int points;
    scanf("%d", &points);
    int grade = points/10+1;

    if (grade>10){
        grade = 10;
    }
    if (grade<5){
        grade = 5;
    }

    printf("%d", grade);
    return 0;
}