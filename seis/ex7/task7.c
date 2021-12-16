//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    //declaration of the array
    int array[100];

    //size of the array
    int i, j, k, n;

    //read the size of the array
    scanf("%d", &n);

    //reading of the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) { //this is iterating the elements one by one
        for (j = i + 1; j < n; j++) { //this is iterating the successors of the I-th element and try to find duplicate
            if (array[i] == array[j]) { //we have found a duplicate to the Ith element, located on the j-th position
                //delete the array[j] by shifting its successors for one place to the left
                for (k = j; k < n - 1; k++) {
                    array[k] = array[k + 1];
                }
                --n; //decrease n because the array now has one element less
                --j; //decrease j because we should now check again this position for duplicate
            }
        }
    }

    for (i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    return 0;
}