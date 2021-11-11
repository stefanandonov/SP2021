//
// Created by Stefan Andonov on 11/11/21.
//

#include<stdio.h>
#include <stdlib.h>

int main (){
    int i, n, number;
    int sumEven = 0, sumOdd = 0;
    scanf("%d", &n);

    for (i=1;i<=n;i++){
        scanf("%d", &number);
        if (i%2==0){
            sumEven+=number;
        } else {
            sumOdd+=number;
        }
    }

    if (abs(sumEven-sumOdd)>10){
        printf("Sumite mnogu se razlikuvaat\n");
    } else {
        printf("Sumite se slichni\n");
    }
    return 0;
}