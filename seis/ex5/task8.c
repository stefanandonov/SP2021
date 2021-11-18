//
// Created by Stefan Andonov on 11/17/21.
//

#include<stdio.h>

int main() {
    int max1, max2, number;
    scanf("%d%d", &max1, &max2);

    if (max2 > max1) {
        int tmp = max1;
        max1 = max2;
        max2 = tmp;
    }

    while (scanf("%d", &number)){
        if (number<max2)
            continue;
        if (number>max1){
            max2=max1;
            max1=number;
        } else {
            if (number>max2){
                max2=number;
            }
        }
    }

    printf("%d %d", max1, max2);
    return 0;
}