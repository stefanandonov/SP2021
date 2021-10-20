//
// Created by Stefan Andonov on 10/14/21.
//

#include<stdio.h>
#include<math.h>

int main() {
    float radius;
    scanf("%f", &radius);

    float perimeter = 2 * radius * M_PI;
    float area = pow(radius, 2) * M_PI;

    printf("The circle with radius %.2f has perimeter %.2f and area %.2f", radius, perimeter, area);
    return 0;
}