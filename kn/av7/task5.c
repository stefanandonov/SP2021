//
// Created by Stefan Andonov on 12/1/21.
//

#include<stdio.h>

int main (){
    int i, n;
    int array[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int tmp = array[n-1];

    for (i=n-1;i>=1;i--){
        array[i]=array[i-1];
    }

    array[0]=tmp;

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}