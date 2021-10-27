//
// Created by Stefan Andonov on 10/27/21.
//

#include<stdio.h>

int main() {
    int x, y; //x = 1, y = 2
    scanf("%d%d", &x, &y);
//    int z = x++ + --y + (x < y);
    //x++ + --y + 1
    //1 + 1 + 0
    //2
//    printf("X: %d Y: %d Z: %d\n", x, y, z);

    int z1 = x++ + --y + x<y;
    //(1 + 1 + 1) < 1
    //3 < 1
    // 0
    printf("X: %d Y: %d Z1: %d\n", x, y, z1);
    return 0;
}