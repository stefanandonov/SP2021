//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int sumOfDigits (int number){
    int sum = 0;
    while (number){
        sum+=number%10;
        number/=10;
    }
    return sum;
}

void printNumber (int n){
    printf("%d\n", n);
}


int main (){
    int n;
    scanf("%d", &n);
    printNumber(sumOfDigits(n));
    printNumber(n);
    return 0;
}