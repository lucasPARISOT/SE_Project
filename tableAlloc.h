#define TABLEALLOC_H_INCLUDED
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include "share.h"

#define NBPRIORITY 10

typedef struct elemProcess
{
    int priority;
    int execTime;
    pid_t pid;
} elemProcess;

typedef struct AllocationTable
{
    // Lists of priority, containing process.
    elemProcess priority0[SIZEARRAY];
    elemProcess priority1[SIZEARRAY];
    elemProcess priority2[SIZEARRAY];
    elemProcess priority3[SIZEARRAY];
    elemProcess priority4[SIZEARRAY];
    elemProcess priority5[SIZEARRAY];
    elemProcess priority6[SIZEARRAY];
    elemProcess priority7[SIZEARRAY];
    elemProcess priority8[SIZEARRAY];
    elemProcess priority9[SIZEARRAY];
    elemProcess priority10[SIZEARRAY];

    // Percentage of execution for every priority list.
    int execPercentage[11];
} AllocationTable;

AllocationTable initAlloc(AllocationTable allocationTable);