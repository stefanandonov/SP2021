//
// Created by Stefan Andonov on 12/1/21.
//

#include<stdio.h>

int main() {
    int i, j, k, n;
    int array[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (array[i] == array[j]) { //we've found a duplicate. DELETE IT!!!!!
                for (k = j; k < n - 1; k++) {
                    array[k]=array[k+1];
                }
                --j;
                --n;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}