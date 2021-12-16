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

    int asc = 1, desc = 1;

    for (i = 1; i < n; i++) {
        if (array[i] <= array[i - 1]) {
            asc = 0;
        }

        if (array[i] >= array[i - 1]) {
            desc = 0;
        }

        if (!asc && !desc){
            break;
        }
    }

    if (asc){
        printf("Ascending");
    } else if (desc){
        printf("Descending");
    } else {
        printf("Neither");
    }


    return 0;
}