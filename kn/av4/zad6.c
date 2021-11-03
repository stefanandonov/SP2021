//
// Created by Stefan Andonov on 11/3/21.
//

#include<stdio.h>

int main (){
    int a,b,c;
    int tmp;
    scanf("%d %d %d", &a, &b, &c);
    if (((a+b)>c) && ((a+c)>b) && ((b+c)>a)){
        if (a>b){
            tmp=a;
            a=b;
            b=tmp;
        }
        if (b>c){
            tmp=b;
            b=c;
            c=tmp;
        }
        if (a>c){
            tmp=a;
            a=c;
            c=tmp;
        }
        //printf("%d,%d,%d", a, b, c);
        if (a*a + b*b == c*c){
            printf("Right triangle\n");
        } else {
            printf("Normal triangle");
        }
    } else {
        printf("The sides are not a side from a triangle\n");
    }
    return 0;
}