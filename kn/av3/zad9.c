//
// Created by Stefan Andonov on 10/27/21.
//

#include<stdio.h>
int main (){
    long embg;
    scanf("%ld", &embg);
    printf("%ld\n", embg);
    int date = embg/1000000;
    int day = date / 100000;
    int month = date / 1000 % 100;
    int year = date % 1000 + 2000;
    printf("%02d.%02d.%d", day, month, year);
    return 0;
}