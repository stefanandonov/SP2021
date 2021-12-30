//
// Created by Stefan Andonov on 12/29/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countOccurrences(char *line, char *word) {
    int i, counter = 0;
    for (i = 0; i < strlen(line) - strlen(word); i++) {
        if (strncmp(word, line + i, strlen(word)) == 0) {
            ++counter;
        }
    }
    return counter;
}

int countOccurrencesRecursive(char *line, char *word) {
    char *res = strstr(line, word);
    if (res == NULL) {
        return 0;
    } else {
        return 1 + countOccurrencesRecursive(res + 1, word);
    }
}

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/dat.txt", "r");

    char word[100];

    scanf("%s", word);

    char currLine[100];
    int occurrences = 0;
    while (fgets(currLine, 100, inputFile) != NULL) {
        occurrences += countOccurrencesRecursive(currLine, word);
    }

    printf("Zborot %s se pojavuva %d pati vo datotekata.", word, occurrences);


    fclose(inputFile);
    return 0;
}