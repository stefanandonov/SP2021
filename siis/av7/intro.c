//
// Created by Stefan Andonov on 11/18/21.
//

#include<stdio.h>

int main (){
    int array [100];

    //goleminata na nizata
    int i, n;
    scanf("%d", &n);

    //se vcituva element
    for (i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    for (i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    return 0;
}