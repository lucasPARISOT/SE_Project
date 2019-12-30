#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

#include "share.h"
#include "tableAlloc.h"
#include "processus.h"

int main(int argc, char const *argv[])
{

    AllocationTable allocationTable = initAlloc(allocationTable);

    for (int i = 0; i < NBPROCESSUS; ++i)
    {
        ElemProcess elementTest = initElement(elementTest);
        allocationTable = addElement(elementTest,allocationTable);
    }

    printf("initElement & addElement successful\n");
    
    printf("\nTEST PRIORITY 0\n\n");

    for(int i = 0; i < 10; ++i)
    {
        printf("i = %d pid: %d\n", i, allocationTable.priority0[i].pid);
    }

    int compteur = 0;
    for (int i = 0; i < SIZEARRAY; ++i)
    {
        if(allocationTable.priority0[i].pid != -1){
            compteur++;
        }
    }
    printf("Element dans la priorite 0: %d\n", NBPROCESSUS-compteur);
    

    /*			//TEST ALLOC PERCENTAGE SUCCESS -> NBPRIORITY=10
    printf("size %d\n", NBPRIORITY);
    for (int i = 0; i <= NBPRIORITY; ++i)
    {
        printf("%d   ", allocationTable.execPercentage[i]);
        printf("i=%d\n",i);
    }
    */

    /*			//TEST ALLOC PRIORITY SUCCESS > NBPRIORITY=10
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