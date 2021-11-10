//
// Created by Stefan Andonov on 10/27/21.
//

#include <stdio.h>
#include <stdlib.h>

int first(int number) {
    while (number >= 10) { number /= 10; }
    return number;
}

int main() {

    printf("%d", first(12345));
    int range_start, range_end, counter = 0;
    scanf("%d", &range_start);
    scanf("%d", &range_end);

    while (range_start < 0 || range_end < 0) {
        scanf("%d", &range_start);
        scanf("%d", &range_end);
    }
    if (range_start > range_end) {
        int temp;
        temp = range_start;
        range_start = range_end;
        range_end = temp;
    }

    while (range_end) {

        int last2FromEnd = range_end%100;
        int last1FromStart = range_start%10;

        if (last2FromEnd/10 != last1FromStart) {
            printf("NEPAREN");
            return 0;
        }
//        if (counter % 2 == 0) {
//            if (first(range_end) % 10 != first(range_start) % 10) {
//                range_end = 0;
//                counter = -1;
//            }
//            range_start /= 10;
//        }
//
//        counter++;
        range_end /= 100;
        range_start /= 10;
    }

    printf("PAREN");

    return 0;
}

