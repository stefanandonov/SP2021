//
// Created by Stefan Andonov on 11/10/21.
//

#include<stdio.h>
int main (){
    int max1,max2,number;
    if (scanf("%d %d", &max1, &max2)==2){
        if (max2>max1){
            int tmp = max2;
            max2 = max1;
            max1 = tmp;
        }
        while (scanf("%d", &number)){
            if (number>max1) {
                max2 = max1;
                max1 = number;
            } else {
                if (number>max2){
                    max2=number;
                }
            }
        }

        printf("Max1: %d Max2: %d", max1, max2);
    }

    return 0;
}