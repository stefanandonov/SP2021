//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("I");
    } else if (x > 0 && y < 0) {
        printf("IV");
    } else if (x < 0 && y > 0) {
        printf("II");
    } else if (x < 0 && y < 0) {
        printf("III");
    } else if (x == 0 && y == 0) {
        printf("origin");
    } else if (x==0){
        printf("y axis");
    } else {
        printf("x axis");
    }
        return 0;
}