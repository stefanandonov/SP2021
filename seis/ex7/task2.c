//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    //declaration of the array
    int array[100];

    //size of the array
    int i, n;

    //read the size of the array
    scanf("%d", &n);

    //reading of the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int sumEven = 0, sumOdd = 0;
    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0) { //even
            sumEven += array[i];
        } else { //odd
            sumOdd += array[i];
        }
    }

    printf("%.2f", (float) sumEven/sumOdd);

    return 0;
}