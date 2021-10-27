//
// Created by Stefan Andonov on 10/21/21.
//
#include<stdio.h>
int main (){
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    int r = (x<y || y<z++);
    printf("r: %d x: %d y: %d z: %d\n", r, x, y, z);

    int r1 = (x>y && y<z++);
    printf("r1: %d x: %d y: %d z: %d", r1, x, y, z);
    return 0;

}