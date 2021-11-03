//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>

int main (){
    int points;
    scanf("%d", &points);

    int firstDigit = points/10;
    int lastDigit = points%10;

    int grade;
    char mark;

    if (firstDigit>=10){
        firstDigit=9;
    }
    if (firstDigit<4){
        firstDigit=4;
    }

    grade = firstDigit+1;

    if (lastDigit<=3 && points!=100){
        mark='-';
    } else if (lastDigit<=7) {
        mark=' ';
    } else {
        mark='+';
    }

    if (grade==5){
        mark=' ';
    }
    if (grade==10 && mark=='+') {
        mark = ' ';
    }
//    if (grade==10 && points==100){
//        mark = ' ';
//    }

    printf("%d%c", grade, mark);
    return 0;
}