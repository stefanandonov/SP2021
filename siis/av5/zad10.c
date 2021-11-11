//
// Created by Stefan Andonov on 11/11/21.
//

#include<stdio.h>

int main() {
    int prev, curr, max_s, max_p, p;
    scanf("%d %d", &prev, &curr);
    max_s = prev + curr;
    p = 2;
    max_p = 2;

    while (prev>0 || curr>0){
        prev = curr;
        ++p;
        scanf("%d", &curr);
        if ((prev+curr)>max_s){
            max_s = prev+curr;
            max_p = p;
        }
    }

    printf("Max sum: %d on positions: %d, %d", max_s, max_p-1, max_p);
    return 0;
}