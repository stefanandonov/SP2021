//
// Created by Stefan Andonov on 12/1/21.
//

#include<stdio.h>

int main (){
    //deklaracija
    int array [100];

    int n; //goleminata na niza
    scanf("%d", &n);

    //vcituva edna niza
    int i;
    for (i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    for (i=0;i<n;i++){
        //TODO process elements
    }

    for (i=0;i<n;i++){
        printf("%d ", array[i]);
    }

}