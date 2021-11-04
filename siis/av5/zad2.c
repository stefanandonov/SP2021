//
// Created by Stefan Andonov on 11/4/21.
//
#include<stdio.h>
int main (){
    float x;
    int i,n;
    float y = 1; //SEKOGAS NA 1!
    scanf("%f %d", &x, &n);

//    while (n>0){
//        y*=x;
//        --n;
//    }

    for (i=1;i<=n;i++){
        y*=x;
    }


    printf("%.2f", y);

    return 0;
}