//
// Created by Stefan Andonov on 10/14/21.
//

#include<stdio.h>
#include <math.h>
int main() {
    float a = 5, b = 7.5, c = 10.2;
    // L = a + b + c
    float perimeter = a + b + c;
    // s = (a+b+c)/2 = L/2    P = sqrt(s*(s-a)*(s-b)*(s-c))
    float s = perimeter/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("For the triangle with sides %.2f, %.2f, %.2f -> Perimeter: %.2f Area: %.2f", a, b, c, perimeter, area);
    return 0;
}