//
// Created by Stefan Andonov on 12/1/21.
//

#include<stdio.h>

int main() {
    int i, n;
    int array[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int asc = 1;
    int desc = 1;

    for (i = 1; i < n; i++) {
        if (array[i]<=array[i-1]){
            asc = 0;
        }

        if (array[i]>=array[i-1]){
            desc = 0;
        }

        if (!asc && !desc){
            printf("Neither ascending nor descending");
            return 0;
        }
    }

    if (asc){
        printf("Ascending");
    } else {
        printf("Descending");
    }
    return 0;
}