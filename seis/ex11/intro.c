//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h> // strings string utils
#include<ctype.h> // utils for characters

int main (){
    char text [100];
    char text2 [100];
    fgets(text, sizeof(text), stdin);
//    puts(text);
//    fgets(text, sizeof(text), stdin);
//    puts(text);

    strcpy(text2, text);
    text[strlen(text)-1]='\0';
    printf("%d\n", strlen(text));
    puts(text);
    puts(text2);


    return 0;
}
