//
// Created by Stefan Andonov on 12/1/21.
//

#include<stdio.h>

int main (){
    int i, n1,n2;
    int array1[100], array2[100];
    scanf("%d", &n1);
    for (i=0;i<n1;i++){
        scanf("%d", &array1[i]);
    }

    scanf("%d", &n2);
    for (i=0;i<n2;i++){
        scanf("%d", &array2[i]);
    }

    if (n1!=n2){
        printf("Different");
        return 0;
    }

    for (i=0;i<n1;i++){
        if (array1[i]!=array2[i]) {
            printf("Different");
            return 0;
        }
    }

    printf("Same");
    return 0;
}