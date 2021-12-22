//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
//    int x;
//    scanf("%d", &x);
//    int * pX = &x;
////    printf("%d %p", x, pX);
//    int * ptr = pX;
//
//    *ptr = 6;
//
//    printf("%d", x);
//    int array[100];
//    int n;
//    scanf("%d", &n);
//    int i;
//    for (i = 0; i < n; i++) {
//        //scanf("%d", &array[i]);
//        scanf("%d", array + i);
//    }
//    //array[i] = *(array+i);!!!
//    printf("%d", *(array + 2));

    int m = 5, n = 6;
    swap(&m, &n);
    printf("%d %d", m, n);
    return 0;
}