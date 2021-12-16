//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>
#include<math.h>

void printFloat(float number) {
    printf("%.2f ", number);
}

float diameter(float radius) {
    return 2 * radius;
}

float perimeter(float radius) {
    return diameter(radius) * M_PI;
}

float area(float radius) {
    return pow(radius, 2) * M_PI;
}

int main() {
    float radius;
    scanf("%f", &radius);
    printFloat(diameter(radius));
    printFloat(perimeter(radius));
    printFloat(area(radius));
    return 0;
}