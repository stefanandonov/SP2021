//
// Created by Stefan Andonov on 12/24/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main() {
    char line[100];
    int start, length;

    gets(line);
    scanf("%d %d", &start, &length);

//    int i;
//    for (i = start - 1; i < start + length - 1; i++) {
//        if (line[i]=='\0')
//            break;
//        printf("%c", line[i]);
//    }

    char newLine[100];

    strncpy(newLine, line+start-1, length);
    newLine[length]='\0';

    puts(newLine);


    return 0;
}