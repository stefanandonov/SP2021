//
// Created by Stefan Andonov on 11/2/21.
//

#include<stdio.h>

int main (){
    int price;
    scanf("%d", &price);
    //float percentage = price * 18 / 100.0f;
    float percentage = price * 0.18;
    //price + percentage
    // = price * 1.0 + price * 0.18
    // = price * (1+0.18)
    // = price * 1.18;

    //price - percentage
    // = price * 1.0 - price * 0.20
    // = price* (1-0.2)
    // = price * 0.8

    printf("%f", price + percentage);
    return 0;
}