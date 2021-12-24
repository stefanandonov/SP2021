//
// Created by Stefan Andonov on 12/24/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int strLength1(char *str) {
    int counter = 0;
    while (*str != '\0') {
        ++counter;
        ++str;
    }
    return counter;
}

int strLength2(char *str) {
    if (*str == '\0')
        return 0;
    else
        return 1 + strLength2(str + 1);
}

int main() {
    char line[100];

    gets(line);

    printf("%d %d", strLength1(line), strLength2(line));

    return 0;
}