//
// Created by Stefan Andonov on 10/27/21.
//

#include<stdio.h>
int main (){
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
//    int r = (x<y || y<z++);
//    printf("x: %d y: %d z: %d r: %d", x, y, z, r);

    int r1 = (x>y && y<z++);
    r1 = 0 && y<z++; //tuka zavrshuva, y<z++ ne se evaluira
    printf("x: %d y: %d z: %d r1: %d", x, y, z, r1);
    return 0;
}