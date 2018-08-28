#include <stdio.h>

#define MaxCandidates 7
#define MaxNameLength 30

typedef struct {
    char name[MaxNameLength + 1];
    int numVotes;
} PersonData;
PersonData candidate[MaxCandidates + 1];




