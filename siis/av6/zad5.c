//
// Created by Stefan Andonov on 11/18/21.
//

#include<stdio.h>

int main (){
    int first, second;
    scanf("%d %d", &first, &second);

    int tmpFirst = first;
    int tmpSecond = second;

    while (tmpFirst>0){
        int digit = tmpFirst%10;
        int found = 0;
        tmpSecond = second;
        while (tmpSecond>0){
            int digit2 = tmpSecond%10;
            if (digit==digit2){
                found=1;
                break;
            }
            tmpSecond/=10;
        }
        if (found==0){
            printf("NE");
            return 0;
        }

        tmpFirst/=10;
    }

    printf("DA");
    return 0;
}