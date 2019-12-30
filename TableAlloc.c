#include "tableAlloc.h"

AllocationTable initAlloc(AllocationTable allocationTable)
{

    // Init the entire struct to 0.
    memset(&allocationTable, -1, sizeof(AllocationTable));

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

    printf("\ninitAlloc successful\n\n");

    return allocationTable;

}

AllocationTable createProcess(AllocationTable allocationTable)
{
    for (int i = 0; i < NBPROCESSUS; ++i)
    {
        ElemProcess elementTest = initElement(elementTest);
        allocationTable = addElement(elementTest,allocationTable);
    }
    printf("initElement & addElement successful\n\n");
    return allocationTable;
}

AllocationTable createNbProcess(AllocationTable allocationTable, int nbProcess)
{
    for (int i = 0; i < nbProcess; ++i)
    {
        ElemProcess elementTest = initElement(elementTest);
        allocationTable = addElement(elementTest,allocationTable);
    }
    printf("initElement & addElement successful\n\n");
    return allocationTable;
}

void nbProcessusPriority(AllocationTable allocationTable, int priority)
{
    int compteur = 0;
    switch(priority)
    {

        case 0:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority0[i].pid != -1){
                    compteur++;
                }
            }
            break;

        case 1:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority1[i].pid != -1){
                    compteur++;
                }
            }
            break;

        case 2:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority2[i].pid != -1){
                    compteur++;
                }
            }
            break;

        case 3:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority3[i].pid != -1){
                    compteur++;
                }
            }
            break;
    
        case 4:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority4[i].pid != -1){
                    compteur++;
                }
            }
            break;
        
        case 5:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority5[i].pid != -1){
                    compteur++;
                }
            }
            break;
        
        case 6:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority6[i].pid != -1){
                    compteur++;
                }
            }
            break;

        case 7:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority7[i].pid != -1){
                    compteur++;
                }
            }
            break;

        case 8:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority8[i].pid != -1){
                    compteur++;
                }
            }
            break;

        case 9:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority9[i].pid != -1){
                    compteur++;
                }
            }
            break;

        case 10:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority10[i].pid != -1){
                    compteur++;
                }
            }
            break;
    }

    printf("Processus actifs dans la priorite %d: %d\n",priority, compteur);
}
