#ifndef TABLEALLOC_H_INCLUDED

#define TABLEALLOC_H_INCLUDED
#include <string.h>
#include <stdio.h>

#include "allocationTable.h"
#include "processus.h"

#define NBPRIORITY 10

AllocationTable initAlloc(AllocationTable allocationTable);
AllocationTable createProcess(AllocationTable allocationTable);
AllocationTable createNbProcess(AllocationTable allocationTable, int nbProcess);
void nbProcessusPriority(AllocationTable allocationTable, int priority);

#endif