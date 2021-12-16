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

    int m;
    scanf("%d", &m);

    int tmp[100];

    for (i = 0; i < m; i++) { //1. last M elements into the tmp array
        tmp[i] = array[n - m + i];
    }

    for (i = n - 1; i >= m; i--) { //2. Shifting the elements for m places to the right
        //(for those elements who don't get out of bounds)
        array[i] = array[i - m];
    }

    for (i = 0; i < m; i++) { //3. put back the last M elements in the beginning of the array
        array[i] = tmp[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}