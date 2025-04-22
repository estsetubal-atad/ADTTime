#include <stdio.h>
#include <stdlib.h>
#include "mytime.h"

typedef struct time {
    // TODO
} Time;

/*
PENSAMENTO: QUAL A FORMA MAIS FÁCIL DE IMPLEMENTAR ADIÇÕES/SUBTRAÇÕES DE TEMPO?
*/

PtTime timeCreate(int hour, int minute, int second) {
    // TODO: Validate input and allocate memory
    return NULL;
}

int timeDestroy(PtTime *ptT) {
    if (ptT == NULL || *ptT == NULL) return TIME_NULL;
    
    // TODO

    return TIME_OK;
}

int timeGetHour(PtTime t, int *hour) {
    if (t == NULL || hour == NULL) return TIME_NULL;
    // TODO
    return TIME_OK;
}

int timeGetMinute(PtTime t, int *minute) {
    if (t == NULL || minute == NULL) return TIME_NULL;
    // TODO
    return TIME_OK;
}

int timeGetSecond(PtTime t, int *second) {
    if (t == NULL || second == NULL) return TIME_NULL;
    // TODO
    return TIME_OK;
}

int timeToSeconds(PtTime t, int *totalSeconds) {
    if (t == NULL || totalSeconds == NULL) return TIME_NULL;
    // TODO
    return TIME_OK;
}

PtTime timeAdd(PtTime t1, PtTime t2) {
    if (t1 == NULL || t2 == NULL) return NULL;
    // TODO: Compute addition and wrap around at 24h
    return NULL;
}

PtTime timeDiff(PtTime t1, PtTime t2) {
    if (t1 == NULL || t2 == NULL) return NULL;
    // TODO: Compute absolute difference between t1 and t2
    return NULL;
}

void timePrint(PtTime t) {
    if (t == NULL) return;
    // TODO: Print in hh:mm:ss format
}
