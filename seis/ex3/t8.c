//
// Created by Stefan Andonov on 11/2/21.
//

#include<stdio.h>

int main (){
    int date;
    scanf("%d", &date);

    int year = date%10000;
    int ddmm = date/10000;

    int day = ddmm/100;
    int month = ddmm%100;

    printf("%02d.%02d.%04d", day, month, year);
    return 0;
}