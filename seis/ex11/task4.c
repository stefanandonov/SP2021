//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isSubstring(char *bigger, char *smaller) {
    int lenBigger = strlen(bigger);
    int lenSmaller = strlen(smaller);

    if (lenSmaller > lenBigger) //if substr is bigger it cannot be substring
        return 0;

    int i;
    for (i = 0; i <= lenBigger - lenSmaller; i++) {
        if (bigger[i] == smaller[0]) { //we have a chance to find the substring
            if (strncmp(smaller, bigger + i, lenSmaller) == 0) {
                return 1;
            }
        }
    }

    return 0;
}

int isSubstring1 (char * bigger, char * smaller) {
    int lenBigger = strlen(bigger);
    int lenSmaller = strlen(smaller);

    if (lenSmaller > lenBigger) //if substr is bigger it cannot be substring
        return 0;

    char * result = strstr(bigger, smaller);

    return result!=NULL;
}

int main() {
    char str[100];
    char substr[100];
    char ch;
    int i;

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; //delete the new line at the end of the string

    fgets(substr, sizeof(substr), stdin);
    substr[strlen(substr) - 1] = '\0'; //delete the new line at the end of the string

    if (isSubstring(str, substr)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
