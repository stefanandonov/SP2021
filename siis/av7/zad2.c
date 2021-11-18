//
// Created by Stefan Andonov on 11/18/21.
//

#include<stdio.h>

int main (){
    int niza [100];
    int n,i;
    int sumaParni = 0, sumaNeparni = 0, countParni = 0, countNeparni = 0;

    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }

    for (i=0;i<n;i++){
        if (niza[i]%2==0){
            sumaParni+=niza[i];
            ++countParni;
        } else {
            sumaNeparni+=niza[i];
            ++countNeparni;
        }
    }

    printf("Suma parni: %d\nSuma neparni: %d\nOdnos: %.2f",
           sumaParni,
           sumaNeparni,
           (float) countParni/countNeparni);

    return 0;
}
