//
// Created by Stefan Andonov on 11/17/21.
//Од тастатура се внесуваат два едноцифрени броја C1 и C2 (1 <= C1, C2 <= 9).
// Потоа се внесува природен број N, кој означува колку броеви ќе се внесат во продолжение.
// Потоа се внесуваат N-те природни броеви.
// За секој од внесените броеви програмата треба да го испечати бројот кај кој цифрата
// C1 од внесениот број е заменетa со цифра C2, како и неговиот следбеник.
//

#include<stdio.h>

int main() {
    int i, c1, c2;
    scanf("%d%d", &c1, &c2);
    int N;
    int number;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &number);
        int tmp = number;
        int newNumber = 0;
        int coef = 1;
        while (tmp){
            int lastDigit = tmp%10;
            if (lastDigit==c1){
                newNumber+=coef*c2;
            } else {
                newNumber+=coef*lastDigit;
            }
            tmp/=10;
            coef*=10;
        }
        printf("%d %d\n", newNumber, newNumber+1);
    }
    return 0;
}