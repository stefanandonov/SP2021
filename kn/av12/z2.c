//
// Created by Stefan Andonov on 12/29/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/vlezna.txt", "r");
    FILE *outputFile = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/izlezna.txt", "w");

    char currLine[100];

    while (fgets(currLine, 100, inputFile) != NULL) {
        fprintf(outputFile, "%ld\n%s", strlen(currLine), currLine);
    }

    fclose(inputFile);
    fclose(outputFile);


    return 0;
}