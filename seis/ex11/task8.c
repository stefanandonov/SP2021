//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int findIndexOfFirstLetter(char *str) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            return i;
        }
    }
    return -1;
}

int findIndexOfLastLetter(char *str) {
    int i;
    for (i = strlen(str) - 1; i > 0; i--) {
        if (isalpha(str[i]))
            return i;
    }
    return -1;
}

void trim(char *str) {
    int fIdx = findIndexOfFirstLetter(str);

    char tmp[100];
    strcpy(tmp, str + fIdx);

    int lIdx = findIndexOfLastLetter(tmp);

    tmp[lIdx+1]='\0';

    strcpy(str,tmp);

}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; //delete the new line at the end of the string

    trim(str);

    puts(str);

    return 0;
}
