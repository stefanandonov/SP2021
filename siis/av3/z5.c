//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>

int main (){
    int price;
    scanf("%d", &price);
//    float tax = price * 0.18; //price * 18.0/100.0
//    int priceWithTax = price * 1.0 + price * 0.18; // price(1+0.18) = price*1.18;
    int priceWithTax = price * 1.18;
    printf("%d %d", price, priceWithTax);
    return 0;
}