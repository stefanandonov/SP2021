//
// Created by Stefan Andonov on 11/8/21.
// Write a program that for n numbers read from SI will
// count the numbers divisible by 3, have residue 1, and have residue 2.
//

#include<stdio.h>

int main (){
    int i,n;
    int number;
    int r0=0, r1=0, r2=0;
    scanf("%d", &n);

    for (i=0;i<n;i++){
        scanf("%d", &number);
        int residue = number % 3;
        if (residue==0){
            r0++;
        } else if (residue==1){
            r1++;
        } else {
            r2++;
        }
    }

    printf("r0: %d\nr1: %d\nr2: %d\n", r0, r1, r2);

    return 0;
}