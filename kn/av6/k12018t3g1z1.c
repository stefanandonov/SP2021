//
// Created by Stefan Andonov on 11/17/21.
//

#include<stdio.h>

int main() {
    char type;
    int i, n;
    int strana;
    scanf("%c", &type);

    if (type == 'T') {
        n = 3;
    } else {
        scanf("%d", &n);
    }

    int sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &strana);
        sum += strana;
    }
    printf("%d", sum);

    return 0;
}