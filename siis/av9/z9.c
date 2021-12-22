//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int max (int array[100], int n){
    if (n==2){
        if (array[1]>array[0])
            return array[1];
        else
            return array[0];
    } else {
        int maxOfTheRest = max (array, n-1);
        if (array[n-1]>maxOfTheRest){
            return array[n-1];
        } else {
            return maxOfTheRest;
        }
    }
}

int main (){
    int i, n, array[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("%d", max(array, n));
    return 0;
}