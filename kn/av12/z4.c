//
// Created by Stefan Andonov on 12/29/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isVowel (char c) {
    c = tolower(c);
    return c=='a' || c=='e' || c=='u' || c=='o' || c=='i';
}

int calculateVowels(char *line) {
    int i, vowels = 0;
    for (i=0;i<strlen(line);i++){
        if (isVowel(line[i])){
            vowels++;
        }
    }
    return vowels;
}

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/SP_primer.txt", "r");

    char currLine [100];
    int lines = 0;
    int totalVowels = 0;
    while (fgets(currLine, 100, inputFile)!=NULL){
        int vowels = calculateVowels(currLine);
        totalVowels+=vowels;
        if (vowels>10){
            lines++;
        }
    }

    printf("Vkupno %d reda imaat povekje od 10 samoglaski.\n"
           "Vo datotekata ima vkupno %d samoglaski.", lines, totalVowels);

    fclose(inputFile);
    return 0;
}