//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>

int main (){
    int a = 3, b = 5, c = 12; //(3+5+12)/3 = 20/3 = 6.666667
    double mean = (a+b+c)/3.0;

    printf("%.2f", mean);

    return 0;
}