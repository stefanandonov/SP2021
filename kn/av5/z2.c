//
// Created by Stefan Andonov on 11/10/21.
//

#include<stdio.h>

int main() {
    int n;
    float x, y=1;


    scanf("%f %d", &x, &n);
    int tmp = n;
    while (tmp > 0) {
        y *= x;
        --tmp;
    }

    printf("%.2f ^ %d = %.2f", x, n, y);
    return 0;
}