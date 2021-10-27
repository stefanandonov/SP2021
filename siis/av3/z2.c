//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>

int main (){
    int x,y;
    scanf("%d%d", &x, &y);

    //x=1 y=2
    /* x++ + --y + (x<y)
     * 1 + 1 + 0
     * 2
     */
    int z = x++ + --y + (x<y);
    printf("%d\n", z);

    //x=1 y=2
    /*
     * 1 + 1 + 1 < 1
     * 3 < 1
     * 0
     */
    int z2 = x++ + --y + x < y;
    printf("%d\n", z2);
    return 0;
}