//
// Created by Stefan Andonov on 11/10/21.
//

#include<stdio.h>

int main (){
    int prev, curr;
    int position;
    int max_sum, max_position;

    scanf("%d %d", &prev, &curr);
    if (prev<0 && curr<0){
        return 0;
    }
    position=2;
    max_sum=prev+curr;
    max_position=position;

    for (position=3; prev>0 || curr>0; ++position){
        prev = curr;
        scanf("%d", &curr);

        int sum = prev+curr;
        if (sum>max_sum){
            max_sum=sum;
            max_position=position;
        }
    }

    printf("%d %d,%d", max_sum, max_position-1, max_position);
    return 0;
}