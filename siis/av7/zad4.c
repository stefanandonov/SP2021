//
// Created by Stefan Andonov on 11/18/21.
//


#include<stdio.h>

int main() {
    int array[100];
    int i, n;

    int ascending = 1, descending = 1;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n - 1; i++) {
        if (array[i] >= array[i + 1]) {
            ascending = 0;
        }
        if (array[i] <= array[i + 1]) {
            descending = 0;
        }
        if (ascending==0 && descending==0){
            break;
        }
    }

    if (ascending){
        printf("Ascending");
    } else if (descending) {
        printf("Descending");
    } else {
        printf("Nor ascending nor descending");
    }
    return 0;
}

