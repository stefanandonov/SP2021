//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[100];
    int i, j, k;

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) { //gi proveruvame site elementi od nizata
        for (j = i + 1; j < n; j++) { //gi vrtime site sledbenici na array[i]
            if (array[i] == array[j]) { //sme nashle duplikat na array[i]
                //pristapuvame kon shiftanje na sledbenicite na array[j] za edno na levo
                for (k = j; k < n - 1; k++) {
                    array[k] = array[k + 1];
                }

                --n; //se namaluva goleminata, bidejki eden element e izbrishan
                --j; //bidejki sega povtorno treba pak da se proveri elementot na pozicija j
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

