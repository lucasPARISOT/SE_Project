//VERSION 1
#include <stdio.h>

typedef struct elemProcess{
    int priority;
    int execTime;
    pid_t pid;
} elemProcess;

typedef struct AllocationTable {
    elemProcess priority0[100];
    elemProcess priority1[100];
    elemProcess priority2[100];
    elemProcess priority3[100];
    elemProcess priority4[100];
    elemProcess priority5[100];
    elemProcess priority6[100];
    elemProcess priority7[100];
    elemProcess priority8[100];
    elemProcess priority9[100];
    elemProcess priority10[100];

    int nbElementPriority0;
    int nbElementPriority1;
    int nbElementPriority2;
    int nbElementPriority3;
    int nbElementPriority4;
    int nbElementPriority5;
    int nbElementPriority6;
    int nbElementPriority7;
    int nbElementPriority8;
    int nbElementPriority9;
    int nbElementPriority10;
} AllocationTable;

int main() {

    AllocationTable allocationTable;

    // Init the entire struct to 0.
    memset(&allocationTable, 0, sizeof(AllocationTable));

    printf("elemnt priority: %d\n", allocationTable.priority0->priority);

    return 0;
}
