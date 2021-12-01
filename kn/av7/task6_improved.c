

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

    for(i=0;i<n;i++){
        tmp[(i+m)%n] = array[i];
    }

    for (i=0;i<n;i++) {
        array[i]=tmp[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}