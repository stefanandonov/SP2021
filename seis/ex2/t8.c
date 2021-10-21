//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>

int main (){
    char c;
    scanf("%c", &c);
//    printf("%c\n", c+32);
//    printf("%c\n", c - 'A' + 'a'); // c-65+97 = c+32
    //reverse
    printf("%c\n", c-32);
    printf("%c\n", c - 'a' + 'A'); // c-65+97 = c+32
    return 0;
}