#include<stdio.h>

int sumOfArray(int array[100], int n) {
    if (n==1)
        return array[0];
    else
        return array[n-1]+sumOfArray(array, n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    int i;
    int array[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("%d", sumOfArray(array, n));
    return 0;
}