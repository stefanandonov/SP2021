//
// Created by Stefan Andonov on 10/20/21.
//

#include<stdio.h>
#include<math.h>
int main (){
    float radius;
    scanf("%f", &radius);

    float perimeter = 2 * radius * M_PI;
    float area = pow(radius,2) * M_PI;
    printf("Perimeter: %f Area: %f", perimeter, area);
    return 0;
}