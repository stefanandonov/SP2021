//
// Created by Stefan Andonov on 11/8/21.
// Write a program that will print all numbers
// in given range which are read the same from left to right and opposite.
// If there are none such number, print NONE on the screen
//

#include<stdio.h>

int main() {
    int i, reverse = 0, start, end;
    int counter = 0;
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        int tmp = i;
        reverse = 0;
        while (tmp > 0) {
            reverse = 10 * reverse + tmp % 10;
            tmp /= 10;
        }
        if (i == reverse) {
            printf("%d\n", i);
            ++counter;
        }
    }

    if (counter==0){
        printf("NONE\n");
    }


//    int number;
//    scanf("%d", &number);
//    int reverse = 0;
//    int tmp = number;
//    while (tmp>0){
//        reverse = 10 * reverse + tmp%10;
//        tmp/=10;
//    }
//    printf("Original: %d Reverse: %d", number, reverse);
    return 0;
}