//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    //with if-elses
    if (x >= y) {
        printf("%d", x);
    } else {
        printf("%d", y);
    }

    //with ternary operator
    printf("%d", (x>=y ? x : y));
    return 0;
}