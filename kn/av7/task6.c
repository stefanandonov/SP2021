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
    int m;
    scanf("%d", &m);

    int tmp [100];
    for (i=0;i<m;i++){
        tmp[i] = array[n-m+i];
    }

    for (i=n-1;i>=m;i--){
        array[i] = array[i-m];
    }

    for (i=0;i<m;i++){
        array[i]=tmp[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}