//
// Created by Stefan Andonov on 11/18/21.
//

#include<stdio.h>
#include<math.h>
int main (){
    int number;
    scanf("%d", &number);

    int digits = 0;
    int tmp = number;
    while (tmp>0){
        ++digits;
        tmp/=10;
    }

    int newNumber = 0;
    int coef = 1;
    tmp = number;
    while (tmp>0){
        int lastDigit = tmp%10;
        int firstDigit = tmp/pow(10, digits-1);

        int newDigit = (firstDigit+lastDigit)%10;
        newNumber += newDigit*coef;

        tmp%=(int)pow(10, digits-1);
        tmp/=10;
        digits-=2;
        coef*=10;
    }

    printf("%d", newNumber);
    return 0;

}