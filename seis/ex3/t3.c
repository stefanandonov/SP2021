//
// Created by Stefan Andonov on 11/2/21.
//

#include<stdio.h>

int main() {
    int x, y, z, r;
    x = 1;
    y = 2;
    z = 3;
//    r = (x < y || y < z++);
    //2<3 ? true --> dont even check y < z++ because OR is true if at least one operand is true

    r = (x > y && y < z++);
    //1>2 ? false -> dont even check y < z++ because AND is false if at least one operand is false
    printf("%d %d", r, z);
    return 0;
}