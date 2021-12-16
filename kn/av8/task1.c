//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>
#include<math.h>

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

    printf("%.2f %.2f %.2f", diameter(radius), perimeter(radius), area(radius));
    return 0;
}