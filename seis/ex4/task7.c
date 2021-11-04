//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main() {
    //5 + 6 input
    //5 + 6 = 11 output
    int x, y;
    char op;
    scanf("%d%c%d", &x, &op, &y);

    if (op == '+') {
        printf("%d %c %d = %d", x, op, y, x + y);
    } else if (op == '-') {
        printf("%d %c %d = %d", x, op, y, x - y);
    } else if (op == '/') {
        printf("%d %c %d = %.2f", x, op, y, (float) x / y);
    } else if (op == '*') {
        printf("%d %c %d = %d", x, op, y, x * y);
    } else if (op == '%') {
        printf("%d %c %d = %d", x, op, y, x % y);
    } else {
        printf("ERROR");
    }
    return 0;
}