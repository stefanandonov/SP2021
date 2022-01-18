
#include <stdio.h>
#include<ctype.h>
#include<string.h>

//ne menuvaj!
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int sumNumbers(char * line) {
    //y2d3vbqiiK064waaa
    //currentNumber = 10*0+2 = 2
    //sum = 0+2 = 2; currentNumber = 0;
    //currentNumber = 10*0+3 = 3;
    //sum = 2+3 = 5; currentNumber = 0;
    //currentNumber = 10*0+0 = 0
    //currentNumber = 10*0+6 = 6
    //currentNumber = 10*6+4 = 64
    //sum = 5+64 = 69; currentNumber = 0;
    int sum = 0;
    int currentNumber = 0;
    for (int i=0;i<strlen(line);i++) {
        if (isdigit(line[i])) {
            currentNumber = 10*currentNumber + (line[i] - '0');
        } else {
            sum+=currentNumber;
            currentNumber = 0;
        }
    }
    return sum;
}

void printAllLetter (char * line) {
    int i;
    for (i=0;i<strlen(line);i++) {
        if (isalpha(line[i])) {
            printf("%c", line[i]);
        }
    }
}

int main() {

    wtf();

    FILE * file = fopen("input.txt", "r");

    char line [100];

    while ((fgets(line, 100, file))!=NULL) {
        int sumOfNumbers = sumNumbers(line);
        printAllLetter(line);
        printf("%d\n", sumOfNumbers);
    }

    fclose(file);

    // Your code goes here!!!!


}
