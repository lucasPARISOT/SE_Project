// Version 3
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

int main(int argc, char const *argv[])
{

    AllocationTable allocationTable;

    allocationTable = initAlloc(allocationTable);

    /*			//TEST ALLOC PERCENTAGE SUCCESS -> NBPRIORITY=10
    printf("size %d\n", NBPRIORITY);
    for (int i = 0; i <= NBPRIORITY; ++i)
    {
        printf("%d   ", allocationTable.execPercentage[i]);
        printf("i=%d\n",i);
    }
    */

    /* 			//TEST ALLOC PRIORITY SUCCESS > NBPRIORITY=10
    printf("element priority 0: %d\n", allocationTable.priority0->priority);
    printf("element priority 1: %d\n", allocationTable.priority1->priority);
    printf("element priority 2: %d\n", allocationTable.priority2->priority);
    printf("element priority 3: %d\n", allocationTable.priority3->priority);
    printf("element priority 4: %d\n", allocationTable.priority4->priority);
    printf("element priority 5: %d\n", allocationTable.priority5->priority);
    printf("element priority 6: %d\n", allocationTable.priority6->priority);
    printf("element priority 7: %d\n", allocationTable.priority7->priority);
    printf("element priority 8: %d\n", allocationTable.priority8->priority);
    printf("element priority 9: %d\n", allocationTable.priority9->priority);
    printf("element priority 10: %d\n", allocationTable.priority10->priority);
    */

    return 0;
}
