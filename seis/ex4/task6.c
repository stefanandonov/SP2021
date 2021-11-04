//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main() {
    int a, b, c;
    int max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        if (b>max){
            max = b;
        }
        if (c>max){
            max = c;
        }

        if (max!=c) {
            if (max==b){
                int tmp = b;
                b = c;
                c = tmp;
            }
            else if (max==a){
                int tmp = a;
                a = c;
                c = tmp;
            }

        }

        if (a*a+b*b == c*c){
            printf("Right triangle");
        } else {
            printf("Regular triangle");
        }
    } else {
        printf("Not a triangle");
    }
    return 0;
}