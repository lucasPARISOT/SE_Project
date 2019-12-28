// Version 3
#include "tableAlloc.h"

AllocationTable initAlloc(AllocationTable allocationTable)
{

    // Init the entire struct to 0.
    memset(&allocationTable, 0, sizeof(AllocationTable));

    // Init percentage
    allocationTable.execPercentage[0]  = EXECPERCENTAGE0;
    allocationTable.execPercentage[1]  = EXECPERCENTAGE1;
    allocationTable.execPercentage[2]  = EXECPERCENTAGE2;
    allocationTable.execPercentage[3]  = EXECPERCENTAGE3;
    allocationTable.execPercentage[4]  = EXECPERCENTAGE4;
    allocationTable.execPercentage[5]  = EXECPERCENTAGE5;
    allocationTable.execPercentage[6]  = EXECPERCENTAGE6;
    allocationTable.execPercentage[7]  = EXECPERCENTAGE7;
    allocationTable.execPercentage[8]  = EXECPERCENTAGE8;
    allocationTable.execPercentage[9]  = EXECPERCENTAGE9;
    allocationTable.execPercentage[10] = EXECPERCENTAGE10;

    // Init priority
    // 0=PRIORITY_MAX 10=PRIORITY_MIN
    allocationTable.priority0->priority  = 0;
    allocationTable.priority1->priority  = 1;
    allocationTable.priority2->priority  = 2;
    allocationTable.priority3->priority  = 3;
    allocationTable.priority4->priority  = 4;
    allocationTable.priority5->priority  = 5;
    allocationTable.priority6->priority  = 6;
    allocationTable.priority7->priority  = 7;
    allocationTable.priority8->priority  = 8;
    allocationTable.priority9->priority  = 9;
    allocationTable.priority10->priority = 10;

    return allocationTable;

}