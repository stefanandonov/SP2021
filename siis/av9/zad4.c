//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>
int sumOfDigitsR(int number){
    if (number<10)
        return number;
    else {
        return number%10 + sumOfDigitsR(number/10);
    }
}
int main (){
    printf("%d", sumOfDigitsR(12345));
    return 0;
}