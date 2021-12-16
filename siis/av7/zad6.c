//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[100];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int m;
    scanf("%d", &m);

    //1 posledni m elementi gi stavame vo tmp niza
    int tmp[100];
    for (i = 0; i < m; i++) {
        tmp[i] = array[i + n - m];
    }

    //2. Site elementi  (sto ne izleguvaat od granicite na nizata) gi shiftame na desno za m mesta
    for (i = n - 1; i >= m; i--) {
        array[i] = array[i - m];
    }

    //3. Gi vrakjame temp elementite na pocetokot na nizata
    for (i = 0; i < m; i++) {
        array[i]=tmp[i];
    }


    for (i = 0; i < n; i++) {
        printf("%d ",array[i]);
    }

    return 0;
}