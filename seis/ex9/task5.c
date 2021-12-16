//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int countEights(int number) {
    if (number == 0) {
        return 0;
    } else {
        int lastDigit = number % 10;
        int secondToTheLastDigit = number / 10 % 10;
        if (lastDigit==8){
            if (secondToTheLastDigit==8){
                return 2 + countEights(number/10);
            } else {
                return 1 + countEights(number/10);
            }
        } else {
            return countEights(number/10);
        }
    }
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d", countEights(number));
    return 0;
}