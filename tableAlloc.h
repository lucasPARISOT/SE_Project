#ifndef TABLEALLOC_H_INCLUDED

#define TABLEALLOC_H_INCLUDED
#include <string.h>
#include <stdio.h>

#include "allocationTable.h"
#include "processus.h"

#define NBPRIORITY 10

AllocationTable initAlloc(AllocationTable allocationTable);
AllocationTable createProcess(AllocationTable allocationTable);
AllocationTable createNbProcess(AllocationTable allocationTable, int quantumDate, int nbProcess);
int nbProcessusPriority(AllocationTable allocationTable, int priority);
int isTableEmpty(AllocationTable allocationTable);
int priorityArray(AllocationTable allocationTable);
void checkingPercentage();
void algorithm(AllocationTable allocationTable);

#endif