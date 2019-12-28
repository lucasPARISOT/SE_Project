#ifndef ALLOCATIONTABLE_H_INCLUDED

#define ALLOCATIONTABLE_H_INCLUDED
#include "elemProcess.h"
#include "share.h"

typedef struct AllocationTable
{
    // Lists of priority, containing process.
    ElemProcess priority0[SIZEARRAY];
    ElemProcess priority1[SIZEARRAY];
    ElemProcess priority2[SIZEARRAY];
    ElemProcess priority3[SIZEARRAY];
    ElemProcess priority4[SIZEARRAY];
    ElemProcess priority5[SIZEARRAY];
    ElemProcess priority6[SIZEARRAY];
    ElemProcess priority7[SIZEARRAY];
    ElemProcess priority8[SIZEARRAY];
    ElemProcess priority9[SIZEARRAY];
    ElemProcess priority10[SIZEARRAY];

    // Percentage of execution for every priority list.
    int execPercentage[11];
} AllocationTable;

#endif