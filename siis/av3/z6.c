//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>

int main() {
    int price;
    double installments, rate; //5.6% --> 0.056   price*1.056
    scanf("%d%lf%lf", &price, &installments, &rate);

    double totalPrice = price + price * rate / 100.0; // price * (1+rate/100.0);

    double installment = totalPrice / installments;
    printf("One installment: %lf. Total price: %lf ", installment, totalPrice);
    return 0;
}