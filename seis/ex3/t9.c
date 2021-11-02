//
// Created by Stefan Andonov on 11/2/21.
//

#include<stdio.h>

int main() {
    //Print the DOB of a person based on his/hers EMBG
    //0211002123456

    long embg;
    scanf("%ld", &embg);
    printf("%ld\n", embg);

    int date = embg / 1000000;
    //date = 0211002 --> 02.11.2002
    int day = date / 100000;
    int month = date / 1000 % 100;
    int year = date % 1000 + 2000;

    printf("%02d.%02d.%04d", day, month, year);
    return 0;
}