//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main (){
    int year;
    scanf("%d", &year);

    if ((year%4==0 && year%100!=0) || year%400==0){
        printf("LEAP");
    } else {
        printf("REGULAR");
    }
    return 0;
}