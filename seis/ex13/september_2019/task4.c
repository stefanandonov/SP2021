//
// Created by Stefan Andonov on 1/11/22.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void writeToFile();

void cleanLine (char * line) {
    int j=0;
    for (int i=0;i<strlen(line);i++) {
        if (isalpha(line[i]) || isspace(line[i])) {
            if (j>0) {
                if (isspace(line[i]) && isspace(line[j-1])) {
                    continue;
                }
            }
            line[j]=line[i];
            ++j;
        }

    }

    line[j]='\0';
}

void printWords(char * line) {
    for (int i=0;i<strlen(line);i++) {
        if (isalpha(line[i]))
            printf("%c", line[i]);
        else if (isspace(line[i]))
            printf("\n");
    }
}

int main() {

    writeToFile();

    //////////////////////////////////
    // DO NOT EDIT BEFORE THIS LINE //
    //////////////////////////////////

    FILE * file = fopen("text.txt", "r");

    char line [100];

    while ((fgets(line, 100, file))!=NULL) {
        cleanLine(line);
        //puts(line);
        printWords(line);
    }

    fclose(file);

    return 0;
}

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

