//
// Created by Stefan Andonov on 10/27/21.
//

#include<stdio.h>

int main (){
    //1000, 10, 5% --> 1000+50 = 1050 rata = 1050/10 = 105;
    int price, installments, interest; //interest e broj od 0 - 100 i oznacuva %
    scanf("%d %d %d", &price, &installments, &interest);
    float priceWithInterest = price + price * interest/100.0;
//    float priceWithInterest2 = price * (1+interest/100.0);
    printf("One installment is: %.0f", priceWithInterest/installments);
    return 0;
}