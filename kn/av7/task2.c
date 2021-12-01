//
// Created by Stefan Andonov on 12/1/21.
//

#include<stdio.h>

int main (){
    int i, n;
    int array [100];

    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    int sumEven = 0;
    int sumOdd = 0;
    for (i=0;i<n;i++){
        if (array[i]%2==0){
            sumEven+=array[i];
        } else {
            sumOdd+=array[i];
        }
    }

    printf("Suma parni: %d\n"
           "Suma neparni: %d\n"
           "Odnos: %.2f", sumEven, sumOdd, (float) sumEven/sumOdd);
    return 0;
}