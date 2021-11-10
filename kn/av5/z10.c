//
// Created by Stefan Andonov on 11/10/21.
//

#include<stdio.h>

int main (){
    char c;
    scanf("%c", &c);

    switch (c) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("Samoglaska\n");
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("Cifra\n");
            break;
        default:
            printf("Soglaska ili nekoj specijalen karakter\n");
            break;

    }
    return 0;
}