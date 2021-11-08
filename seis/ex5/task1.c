//
// Created by Stefan Andonov on 11/8/21.
// a. Write a program that computes the sum of all even two-digit numbers. Print the result on standard output.
// b. Write a program that computes the sum of all odd two-digit numbers. Print the result on standard output in the following format:
// 11 + 13 + 15 + 17 + ... + 97 + 99 = 2475
//

#include<stdio.h>

int main (){
    //a.
    int i;
    int sum = 0;
    for (i=10;i<=98;i+=2){
        sum+=i;
    }
    printf("%d\n", sum);

    //b
    int sumOdd = 0;
    for (i=11;i<=99;i+=2){
        sumOdd+=i;
        if (i==99){
            printf("%d ", i);
        } else {
            printf("%d + ", i);
        }
    }
    printf("= %d\n", sumOdd);
    return 0;
}