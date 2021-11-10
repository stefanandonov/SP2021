//
// Created by Stefan Andonov on 11/10/21.
//

#include<stdio.h>
#include <stdlib.h>

int main() {
    int i,n, number;
    int sumEvenPosition = 0, sumOddPosition = 0;
    scanf("%d", &n);

    for (i=1;i<=n;i++){
        scanf("%d", &number);
        if (i%2==0){
            sumEvenPosition+=number;
        } else {
            sumOddPosition+=number;
        }
    }

//    printf("%d %d", sumEvenPosition, sumOddPosition);

    if (abs(sumOddPosition-sumEvenPosition)<10){
        printf("Dvete sumi se slicni\n");
    } else {
        printf("Dvete sumi mnogu se razlikuvaat\n");
    }
    return 0;
}