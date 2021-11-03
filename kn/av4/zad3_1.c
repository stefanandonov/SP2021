
//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x>0){
        if (y>0){
            printf("I");
        } else if (y<0) {
            printf("IV");
        } else {
            printf("x-oskata");
        }
    } else if (x<0) {
        if (y>0){
            printf("II");
        } else if (y<0) {
            printf("III");
        } else {
            printf("x-oskata");
        }
    } else {
        if (y==0) {
            printf("Koordinaten pocetok");
        } else {
            printf("y-oskata");
        }

    }
    return 0;
}