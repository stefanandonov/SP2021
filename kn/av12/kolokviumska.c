//
// Created by Stefan Andonov on 12/29/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int onlyLettersOrDigits(char *line) {

    int i, digits = 0;
    int letters = 0;

    for (i = 0; i < strlen(line); i++) {
        if (isdigit(line[i]))
            ++digits;
        if (isalpha(line[i]))
            ++letters;
    }

    return digits == strlen(line) || letters == strlen(line);
//    int i;
//    char first = line[0];
//    if (isalpha(first)) {
//        for (i = 0; i < strlen(line); i++) {
//            if (!isalpha(line[i])) {
//                return 0;
//            }
//        }
//    } else if (isdigit(first)) {
//        for (i = 0; i < strlen(line); i++) {
//            if (!isdigit(line[i])) {
//                return 0;
//            }
//        }
//    } else {
//        return 0;
//    }
//
//    return 1;
}

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/vlezna1.txt", "r");

    char line[100];
    char maxLine [100];
    int first = 1;

    while (fgets(line, 100, inputFile) != NULL) {
        if (line[strlen(line)-1]=='\n')
            line[strlen(line)-1]='\0';
        if (onlyLettersOrDigits(line)) {
            if (first){
                strcpy(maxLine, line);
                first = 0;
            } else {
                if (strlen(line)>strlen(maxLine)){
                    strcpy(maxLine, line);
                }
            }
        }
    }

    if (first){
        printf("Nema!");
    } else {
        printf("%s", maxLine);
    }




    fclose(inputFile);
    return 0;
}