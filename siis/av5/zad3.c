//
// Created by Stefan Andonov on 11/4/21.
//
#include<stdio.h>

int main() {
    int i, n;
    int number;
    int r0 = 0, r1 = 0, r2 = 0;
    scanf("%d", &n);

//    while (n>0){
//        scanf("%d", &number);
//        int r = number%3;
//        if (r==0){
//            r0++;
//        } else if (r==1){
//            r1++;
//        } else {
//            r2++;
//        }
//        --n;
//    }

    for (i = 0; i < n; i++) {
        scanf("%d", &number);
        int r = number%3;
        if (r==0){
            r0++;
        } else if (r==1){
            r1++;
        } else {
            r2++;
        }
    }

    printf("R0: %d, R1: %d, R2: %d", r0, r1, r2);
    return 0;
}