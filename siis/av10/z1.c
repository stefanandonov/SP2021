//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

void maxAscendingSubarray(int array [], int n, int *start, int *length) {
    int i;
    for (i = 0; i < n - 1; i++) {
        int currStart = i;
        int currLength = 1;
        while (*(array + i) < *(array + i + 1)) { //array[i]<array[i+1]
            ++i;
            ++currLength;
        }
        if (currLength > *length) {
            *length = currLength;
            *start = currStart;
        }
    }
}

int main() {
    int array[100];
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        //scanf("%d", &array[i]);
        scanf("%d", array + i);
    }
    int start = 0, length = 1;
    maxAscendingSubarray(array, n, &start, &length);
    printf("%d %d\n", start, length);
    for (i=start;i<start+length;i++){
        printf("%d ", *(array+i));
    }
    return 0;
}