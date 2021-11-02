//
// Created by Stefan Andonov on 10/28/21.
//

#include<stdio.h>

int main() {
//    int x;
//    scanf("%d", &x);
//    printf("%d", x > 0 && x < 10); // 1 < 10 --> true (1)
//                            //0 < 10 -> true (1)

//    int a = 5;
//    int b = 6;
//    printf("%d %d\n", a++, ++a);
//    printf("%d", a);
//
//    a = 1;
//    printf("%d", --a && a < 10);
//    return 0;

    int x;
    int y;

    scanf("%d %d", &x, &y);
    printf("%d %d\n", x, y); //not correct
    printf("%.2f\n", (float) x / (float) y); //OK
    printf("%.2f", (float) (x/y)); //not correct
}