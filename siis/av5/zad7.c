//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>
int main (){
    int n;
    int max;
    int flag = 1;
    while (scanf("%d", &n)){
        if (n>100){
            continue;
        }
        if (flag){ //ova e prviot element
            max = n;
            flag=0;
        }
        if (n>max){
            max = n;
        }
    }

    printf("%d", max);

    return 0;
}