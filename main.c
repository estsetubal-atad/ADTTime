#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "mytime.h"

int main() {

    PtTime t1 = timeCreate(14, 45, 30);
    PtTime t2 = timeCreate(2, 20, 50);

    if (t1 == NULL || t2 == NULL) {
        printf("Failed to create time values.\n");
        return 1;
    }

    printf("Time 1: ");
    timePrint(t1);

    printf("Time 2: ");
    timePrint(t2);

    int h, m, s;

    // Assumimos que se t1 é válido, os "getters" funcionarão
    timeGetHour(t1, &h);
    timeGetMinute(t1, &m);
    timeGetSecond(t1, &s);
    printf("Time 1 components: %02d hours, %02d minutes, %02d seconds\n", h, m, s);

    PtTime sum = timeAdd(t1, t2);
    PtTime diff = timeDiff(t1, t2);

    if (sum != NULL) {
        printf("Sum: ");
        timePrint(sum);
    }

    if (diff != NULL) {
        printf("Difference: ");
        timePrint(diff);
    }

    // TODO: uso e teste de operações "complementares" 

    // Libertação explícita da memória heap
    timeDestroy(&t1);
    timeDestroy(&t2);
    timeDestroy(&sum);
    timeDestroy(&diff);

    return EXIT_SUCCESS;
}
