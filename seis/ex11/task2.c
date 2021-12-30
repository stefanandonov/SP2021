//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int len(char *str) {
    int counter = 0;
    while (*str != '\0') {
        ++counter;
        ++str;
    }
    return counter;
}

int lenR(char *str) {
    if (*str == '\0')
        return 0;
    else
        return 1 + lenR(str + 1);
}

int main() {
    char str[100];
    char ch;

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; //delete the new line at the end of the string

    printf("%d", len(str));
    return 0;
}
