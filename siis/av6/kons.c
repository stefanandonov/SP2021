#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j, iznos;
    float zbir = 0;
    float maxPovratok = 0;
    int maxSum = 0;
    int suma = 0;
    char tip;
    float povratok;
    scanf("%d", &m);
    for (j = 1; j <= m; j++) {
        scanf("%d", &n);
        suma = 0;
        zbir = 0;
        for (i = 1; i <= n; i++) {
            scanf("%d %c", &iznos, &tip);
            int temp = iznos;
            //printf("%d %c\n", iznos,tip);
            suma += iznos;

            if (tip == 'A') {
                zbir += iznos * 0.18 * 0.15;
            }
            if (tip == 'B') {
                zbir += iznos * 0.05 * 0.15;
            }
            if (tip == 'V') {
                zbir += 0;
            }
        }
        if (suma > 30000) {
            printf("Sum %d is bigger than 30000\n", suma);
            continue;
        } else {
            printf("Total tax return is: %.2f\n", zbir);
            if (zbir > maxPovratok){
                maxSum = suma;
                maxPovratok = zbir;
            }
        }
    }
//    povratok = zbir * 0.15;
    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f", maxSum, maxPovratok);
    return 0;
}
