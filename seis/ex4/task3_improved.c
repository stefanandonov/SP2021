//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

//    if (x==0 && y==0){
//        printf("origin");
//        return 0;
//    }

    if (x>0) {
        //right side of the system
        if (y>0) {
            printf("I");
        } else if (y<0) {
            printf("IV");
        } else {
            printf("x-axis");
        }
    } else if (x<0) {
        //left side of the system
        if (y>0) {
            printf("II");
        } else if (y<0) {
            printf("III");
        } else {
            printf("x-axis");
        }
    } else {
        //x==0 y axis
        if (y==0){
            printf("origin");
        } else {
            printf("y-axis");
        }
    }
    return 0;
}