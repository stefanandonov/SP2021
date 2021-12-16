//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int countEights(int number) {
    if (number == 0)
        return 0;
    else {
        int lastDigit = number % 10;
        int secondToLastDigit = number / 10 % 10;
        if (lastDigit!=8){
            return countEights(number/10);
        } else {
            if (secondToLastDigit==8){
                return 3 + countEights(number/100);
            } else {
                return 1 + countEights(number/10);
            }
        }
    }
}

int main() {
    printf("%d", countEights(8818));
    return 0;
}