//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>

int main (){
    float x;
    x = 3/2 + (5 - 46*5/12);
    /*
     * 3/2 + (5 - 46*5/12)
     * 3/2 + (5 - 19)
     * 3/2 - 14
     * 1 - 14
     * -13
     */

    float xx = 3/2.0 + (5 - 46*5/12.0);
    printf("%f\n%f", x, xx);
    return 0;
}