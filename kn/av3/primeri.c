//
// Created by Stefan Andonov on 10/27/21.
//

#include <stdio.h>

//int main() {
//    int a;
//    float p;
//    p = 1.0 / 2.0; /* p = 0.5 */
//    a = 5 / 2; /* a = 2 */
//    p = 1 / 2 + 1 / 8; /* p = 0; */
//    p = 3.5 / 2.8; /* p = 1.25 */
//    a = p; /* a = 1 */
//    ++a; /* a = 2; */
//    return 0;
//}

#include <stdio.h>
int main() {
    int integer1; /* prviot broj sto kje go vnesuva korisnikot */
    int integer2; /* vtoriot broj sto kje go vnesuva korisnikot */
    int sum; /* promenliva vo koja kje se zachuva sumata */
    float kol; /* promenliva vo koja kje se zachuva kolichnikot */

    printf("Vnesi prv cel broj\n");
    scanf("%d", &integer1);

    printf("Vnesi vtor cel broj\n"); /* procitaj cel broj */
    scanf("%d", &integer2); /* procitaj cel broj */

    sum = integer1 + integer2; /* dodeli go zbirot na sum */
    kol =  (float) (integer1 / integer2); /* dodeli go kolicnikot na kol */

    printf("Nivnata suma e %d\n", sum); /* pecati sum */
    printf("Nivniot kolicnik e %.2f\n", kol); /* pecati kol */

    int a = 3;
    printf("%d\n", a++ + ++a); //3+5
    printf("%d",a);

    return 0;
}