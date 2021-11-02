//
// Created by Stefan Andonov on 11/2/21.
//

#include<stdio.h>

int main (){
    int x,y,z;
    scanf("%d %d", &x, &y);
    //x=1, y=2
//    z = x++ + --y + (x<y);
    //1 + 1 + 0
    //2

    z = x++ + --y + x < y;
    //1 + 1 + 2 < 1
    //4 < 1
    //0
    printf("X: %d\nY: %d\nZ: %d", x, y, z);
    return 0;
}