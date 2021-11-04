//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main (){
    int x,y;
    int max;
    scanf("%d %d", &x, &y);

    if (x>=y){
        max = x;
    } else {
        max = y;
    }



//    max = (x>=y ? x : y);
//
    printf("%d\n", max);
//    printf("%d\n", x>=y ? x : y);
    return 0;
}