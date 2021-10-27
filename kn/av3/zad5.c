//
// Created by Stefan Andonov on 10/27/21.
//

#include<stdio.h>

int main() {
    int price;
    scanf("%d", &price);
    printf("%.0f", price + price * 0.18);
    //1*x+x*0.18 = x(1+0.18) = 1.18 * x;
    printf("%.0f", price * 1.18);
    return 0;
}