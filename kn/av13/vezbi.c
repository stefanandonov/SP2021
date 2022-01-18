//
// Created by Stefan Andonov on 1/10/22.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cleanString(char *str) {
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
}


void transform(char *line, int x) {
    if (*line == '\0')
        return;
    if (isalpha(*line)) {
        if (islower(*line)) {
            *line = ((int) *line + x - 'a') % 26 + 'a';
        } else {
            *line = ((int) *line + x - 'A') % 26 + 'A';
        }
    }
    transform(line+1,x);
}

int main() {
    int n, x;
    scanf("%d %d\n", &n, &x);

    int i;
    for (i = 0; i < n; i++) {
        char line[81];
        fgets(line, sizeof(line), stdin);
        cleanString(line);

        transform(line, x);

        puts(line);
    }
    return 0;
}