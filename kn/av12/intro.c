//
// Created by Stefan Andonov on 12/29/21.
//

#include<stdio.h>
#include<string.h>

int main() {
    //1. open the file
    FILE *f = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/test.txt", "r");

    //2. Determine the way to read the file

//    //line by line
//    char line[100];
//
//    while (fgets(line, 100, f) != NULL) {
//        line[strlen(line)-1]='\0';
//        puts(line);
//    }

//    //char by char
//    char curr;
//    while ((curr = fgetc(f)) != EOF) {
//        printf("%c\n", curr);
//    }

    //formatted reading
    int words;
    fscanf(f, "%d", &words);

    printf("%d\n", words);
    char word[100];
    int i;
    for (i = 0; i < words; i++) {
        fscanf(f, "%s", word);
        printf("%s\n", word);
    }

    //3. Close the file
    fclose(f);
    return 0;
}