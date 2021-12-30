//
// Created by Stefan Andonov on 12/29/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int condition(char *word) {
    int i, j;
    for (i = 0; i < strlen(word); i++) {
        int counter = 0;
        for (j = 0; j < strlen(word); j++) {
            if (tolower(word[i]) == tolower(word[j]))
//            if (word[i]==word[j]) greska!
                ++counter;
        }

        if (counter > 2)
            return 1;
    }
    return 0;
}

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/zborovi.txt", "r");

    char word[100];
    int counter = 0;
    while (fgets(word, 100, inputFile) != NULL) {
        if (condition(word)) {
            printf("%s", word);
            ++counter;
        }
    }

    printf("\nVkupno %d zborovi.", counter);


    fclose(inputFile);
    return 0;
}