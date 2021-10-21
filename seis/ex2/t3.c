//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>
#include<math.h>

int main() {
    double a = 5.0, b = 7.5, c = 10.2;
    /*
     * L = a + b + c;
     * P = sqrt(s*(s-a)*(s-b)*(s-c)), s=(a+b+c)/2=L/2
     */
    double perimeter = a + b + c;
    double s = perimeter / 2;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Perimeter: %.2f, Area: %.4f\n", perimeter, area);
//    printf("%09d", 1234);
    return 0;
}