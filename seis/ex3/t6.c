//
// Created by Stefan Andonov on 11/2/21.
//

#include<stdio.h>

int main (){
    //price: 15000MKD, installments: 10, interest: 7%
    //price_with_interest = 16050MKD
    //installment = price_with_interest/installments = 1605MKD
    int price, installments, interest;
    scanf("%d %d %d", &price, &installments, &interest);
    float totalPrice = price * (1 + interest / 100.0f);

    printf("Total price (with interest): %.2f\n", totalPrice);
    printf("Installment value: %.2f\n", totalPrice / installments);
    return 0;
}