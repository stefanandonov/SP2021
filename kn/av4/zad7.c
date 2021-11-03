//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float area;
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        //moze triagolnik
        if (a == b && b == c) {
            printf("Equilateral triangle\n"); //ramnostran
        } else if ((a==b) || (b==c) || (c==a)){ //ramnokrak
            printf("Isosceles triangle\n");
        } else { //raznostran
            printf("Scalene triangle");
        }
        float perimeter = (a+b+c);
        float s = perimeter/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area: %.2f", area);

    } else {
        printf("The sides are not a side from a triangle\n");
    }
    return 0;
}