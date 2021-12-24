//
// Created by Stefan Andonov on 12/24/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countOccurrences(char *line, char c) {
    int counter = 0;
    while (*line != '\0') {
        if (*line == c) {
            ++counter;
        }
        line++;
    }
    return counter;
}

int countOccurrences1(char *line, char c) {
    int i, counter = 0;
    for (i = 0; i < strlen(line); i++) {
        if (line[i] == c) {
            ++counter;
        }
    }
    return counter;
}

int countOccurrences2(char * line, char c) {
    if (*line=='\0')
        return 0;
    else {
        if (*line==c)
            return 1 + countOccurrences2(line+1, c);
        else
            return countOccurrences2(line+1, c);
    }
}


int main() {
    char line[100];
    char character;

    gets(line);
    scanf("%c", &character);

    printf("%d\n", countOccurrences(line, character));
    printf("%d\n", countOccurrences1(line, character));
    printf("%d\n", countOccurrences2(line, character));
    return 0;
}