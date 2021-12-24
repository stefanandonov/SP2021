//
// Created by Stefan Andonov on 12/23/21.
//

#include<stdio.h>

void processArray(int *array, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(array + i) *= 2;
    }
}

void swap (int * x, int * y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


int main() {
//    int x;
//    int *xPtr = &x;
//
//    //scanf("%d", &x);
//    scanf("%d", xPtr);
//
//    printf("%d %d\n", x, *xPtr);
//
//    int * xPtr1 = xPtr;
//    *xPtr1 = 10;
//    printf("%d %d", x, *xPtr);

//    int array[100];
//    int i, n;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
////        scanf("%d", &array[i]);
//        scanf("%d", array + i);
//    }
//
//    processArray(array, n);
//
//    for (i = 0; i < n; i++) {
////        printf("%d", array[i]);
//        printf("%d ", *(array + i));
//    }

    int x=5, y=6;
    swap(&x,&y);
    printf("%d %d", x, y);
    return 0;
}