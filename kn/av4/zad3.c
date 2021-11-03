//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("I kvadrant\n");
    } else if (x > 0 && y < 0) {
        printf("IV kvadrant\n");
    } else if (x < 0 && y < 0) {
        printf("III kvadrant\n");
    } else if (x < 0 && y > 0) {
        printf("II kvadrant\n");
    } else if (x == 0 && y == 0) {
        printf("Koordinaten pocetok");
    } else if (x==0) {
        printf("y-oskata");
    } else {
        printf("x-oskata");
    }
    return 0;
}