//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main (){
    int points;
    scanf("%d", &points);
    int grade = 5;
    if (points>=90){
        grade = 10;
    } else if (points>=80){
        grade = 9;
    } else if (points>=70){
        grade = 8;
    } else if (points>=60){
        grade = 7;
    } else if (points>=50){
        grade = 6;
    }

    printf("%d", grade);
    return 0;
}