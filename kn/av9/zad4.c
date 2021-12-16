//
// Created by Stefan Andonov on 12/15/21.
//

#include<stdio.h>
int sumOfDigit(n){
    if (n<10)
        return n;
    else
        return n%10 + sumOfDigit(n/10);
}
int main (){
    int x = 1234;
    printf("%d", sumOfDigit(x));
    return 0;
}