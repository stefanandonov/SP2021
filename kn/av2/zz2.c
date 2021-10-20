//
// Created by Stefan Andonov on 10/20/21.
//

#include<stdio.h>

int main (){
    int x = 3/2 + (5 - 46*5/12);
    /*
     * 3/2 + (5 - 46*5/12)
     * 3/2 + (5 - 19)
     * 3/2 - 14
     * 1 - 14
     * -13
     */

    double xx = 3/2. + (5 - 46.*5/12);
    printf("%d %lf\n", x, xx);
    return 0;
}