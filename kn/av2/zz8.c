//
// Created by Stefan Andonov on 10/20/21.
//

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %f\n", a, b, a * 1.0 / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    return 0;
}