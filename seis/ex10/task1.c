//
// Created by Stefan Andonov on 12/23/21.
//

#include<stdio.h>

void findMaxAscSubarray(int *array,
                        int n,
                        int *maxStartPtr,
                        int *maxLengthPtr) {
//    int i;
//    int start = -1;
//    int length = -1;
//    for (i = 0; i < n - 1; i++) {
//        if (*(array + i) < *(array + i + 1)) {
//            if (start == -1) {
//                start = i;
//                length = 1;
//            }
//            ++length;
//        } else {
//            if (length > *maxLengthPtr) {
//                *maxLengthPtr = length;
//                *maxStartPtr = start;
//            }
//            start = -1;
//            length = -1;
//        }
//    }

    int i;
    for (i = 0; i < n - 1; i++) {
        int currStart = i;
        int currLength = 1;
        while (*(array + i) < *(array + i + 1)) { //array[i]<array[i+1]
            ++i;
            ++currLength;
        }
        if (currLength > *maxLengthPtr) {
            *maxLengthPtr = currLength;
            *maxStartPtr = currStart;
        }
    }
}

int main() {
    int array[100];
    int i, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", array + i);
    }

    int maxStart = 0;
    int maxLength = 1;

    findMaxAscSubarray(array, n, &maxStart, &maxLength);

    for (i = maxStart; i < maxStart + maxLength; i++) {
        printf("%d ", *(array + i));
    }


    return 0;
}