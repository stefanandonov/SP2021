//
// Created by Stefan Andonov on 11/17/21.
//

#include<stdio.h>
#include <stdlib.h>

int main() {
    int i, N;
    scanf("%d", &N);
    int number;
    int sumEven = 0, sumOdd = 0;

    for (i = 1; i <= N; i++) {
        scanf("%d", &number);
        if (i%2==0){ //even position
            sumEven+=number;
        } else { //odd position
            sumOdd+=number;
        }
    }

    int diff = abs(sumEven-sumOdd);
    if (diff>10){
        printf("The two sums are far");
    } else {
        printf("The two sums are close");
    }
//    printf("%d %d", sumEven, sumOdd);
    return 0;
}