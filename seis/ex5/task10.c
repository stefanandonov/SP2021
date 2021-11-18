//
// Created by Stefan Andonov on 11/17/21.
//

#include<stdio.h>

int main (){
    int pred, curr;
    scanf("%d%d", &pred, &curr);
    int maxSum = pred+curr;
    int sum;
    int position = 2;
    int maxPosition = 2;

    while (pred>=0 || curr>=0){
        pred = curr;
        scanf("%d", &curr);
        ++position;
        if (pred+curr>maxSum){
            maxSum=pred+curr;
            maxPosition = position;
        }
    }

    printf("%d %d", maxPosition-1, maxPosition);
    return 0;
}