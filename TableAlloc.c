// Version 2
#include <stdio.h>
#include <string.h>

typedef struct elemProcess{
    int priority;
    int execTime;
    pid_t pid;
} elemProcess;

typedef struct AllocationTable {
    // Lists of priority, containing process.
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

    // Number of process in each priority list.
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

    // Porcentage of execution for every priority list.
    int execPourcentage[11];
} AllocationTable;

int main() {

    AllocationTable allocationTable;

    // Init the entire struct to 0.
    memset(&allocationTable, 0, sizeof(AllocationTable));

    allocationTable.execPourcentage[0] = 10;
    allocationTable.execPourcentage[1] = 10;
    allocationTable.execPourcentage[2] = 10;
    allocationTable.execPourcentage[3] = 10;
    allocationTable.execPourcentage[4] = 10;
    allocationTable.execPourcentage[5] = 10;
    allocationTable.execPourcentage[6] = 10;
    allocationTable.execPourcentage[7] = 10;
    allocationTable.execPourcentage[8] = 10;
    allocationTable.execPourcentage[9] = 10;
    allocationTable.execPourcentage[10] = 10;
    allocationTable.execPourcentage[11] = 0;

    printf("size %d\n", sizeof(allocationTable.execPourcentage)/ sizeof(int));

    for (int i = 0; i <= sizeof(allocationTable.execPourcentage)/ sizeof(int); ++i) {
        printf("%d\n", allocationTable.execPourcentage[i]);
        printf("i %d\n",i);
    }

    // Test successful.
    // printf("elemnt priority: %d\n", allocationTable.priority0->priority);

    return 0;
}
