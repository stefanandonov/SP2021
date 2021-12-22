//
// Created by Stefan Andonov on 12/22/21.
//

#include<stdio.h>

void swap (int * a, int * b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void divideArrayWith2 (int * array, int n) {
    int i;
    for (i=0;i<n;i++) {
        *(array+i)*=2;
    }
}

int main (){
//    int x;
//    int * xPtr = &x;
//
//    int * x1Ptr = xPtr;
//
//    scanf("%d", xPtr);
//    printf("%d", *x1Ptr);

    int niza[100];
    int i,n;
    scanf("%d", &n);

    for (i=0;i<n;i++){
        scanf("%d", niza + i);
    }

    divideArrayWith2(niza,n);

    for (i=0;i<n;i++){
        printf("%d ", *(niza + i));
    }

    int x = 5, y =6;
    swap(&x,&y);
    printf("%d %d", x, y);

    return 0;
}