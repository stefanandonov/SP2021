//
// Created by Stefan Andonov on 10/20/21.
//

#include<stdio.h>
#include<math.h>
int main() {
    float a = 5.0, b = 7.5, c = 10.2;
    float perimeter = a + b + c;
    //s=(a+b+c)/2 = L/2  P = sqrt(s*(s-a)*(s-b)*(s-c))
    float s = perimeter/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Perimeter: %lf Area: %f", perimeter, area);
    return 0;
}