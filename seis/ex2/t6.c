//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>
#include<math.h>

int main() {
    double radius;
    scanf("%lf", &radius);
    double perimeter = 2 * radius * M_PI;
    double area = pow(radius,2) * M_PI;
    printf("Perimeter: %.2lf, Area: %.2lf", perimeter, area);
    return 0;
}