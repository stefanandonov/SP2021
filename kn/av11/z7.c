//
// Created by Stefan Andonov on 12/24/21.
//
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void clean1(char *str) {
    int i, j = 0;
    int n = strlen(str);
    char tmp[100];
    for (i = 0; i < n; i++) {
        if (!isalpha(str[i])) {
            str[i] = '@';
        }
    }

    for (i = 0; i < n; i++) {
        if (str[i]!='@'){
            if (isupper(str[i])) {
                str[j]=tolower(str[i]);
            } else {
                str[j]=toupper(str[i]);
            }
            ++j;
        }
    }

    str[j]='\0';


}

void clean(char *str) {
    int i, j;
    int n = strlen(str);

    for (i = 0; i < n; i++) {
        if (!isalpha(str[i])) {
            for (j = i; j < n - 1; j++) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
            --n;
            --i;
        } else {
            if (isupper(str[i])) {
                str[i] = tolower(str[i]);
            } else {
                str[i] = toupper(str[i]);
            }
        }
    }
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    clean1(str);

    puts(str);
    return 0;
}