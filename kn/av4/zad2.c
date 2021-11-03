//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>

int main (){
    int year;
    scanf("%d", &year);
    if ((year%4==0 && year%100!=0) || year%400==0){
        printf("Lear year\n");
    } else {
        printf("Regular year\n");
    }

    //with ternary operator
    printf("%s year\n", ((year%4==0 && year%100!=0) || year%400==0) ? "Leap" : "Regular");
    return 0;
}