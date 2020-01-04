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
        elementTest.quantumDate = 0;
        allocationTable = addElement(elementTest,allocationTable);
    }
    printf("\ninitElement & addElement successful\n\n");
    return allocationTable;
}

AllocationTable createNbProcess(AllocationTable allocationTable, int quantumDate, int nbProcess)
{
    for (int i = 0; i < nbProcess; ++i)
    {
        ElemProcess elementTest = initElement(elementTest);
        elementTest.quantumDate = quantumDate;
        allocationTable = addElement(elementTest,allocationTable);
    }
    printf("\ninitElement & addElement successful\n\n");
    return allocationTable;
}

int nbProcessusPriority(AllocationTable allocationTable, int priority)
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
            return compteur;
            break;

        case 1:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority1[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;

        case 2:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority2[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;

        case 3:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority3[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;
    
        case 4:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority4[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;
        
        case 5:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority5[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;
        
        case 6:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority6[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;

        case 7:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority7[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;

        case 8:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority8[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;

        case 9:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority9[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;

        case 10:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if(allocationTable.priority10[i].pid != -1){
                    compteur++;
                }
            }
            return compteur;
            break;
    }

    printf("Processus actifs dans la priorite %d: %d\n",priority, compteur);
}

int priorityArray(AllocationTable allocationTable)
{
    srand(time(NULL));
    int file;

    // nb entre 0 et 100
    int fileRand = rand()%101;

    if (fileRand < EXECPERCENTAGE0)
    {
        file = 0;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1)
    {
        file = 1;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2)
    {
        file = 2;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2
     + EXECPERCENTAGE3)
    {
        file = 3;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2
     + EXECPERCENTAGE3 + EXECPERCENTAGE4)
    {
        file = 4;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2
     + EXECPERCENTAGE3 + EXECPERCENTAGE4 + EXECPERCENTAGE5)
    {
        file = 5;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2
     + EXECPERCENTAGE3 + EXECPERCENTAGE4 + EXECPERCENTAGE5 + EXECPERCENTAGE6)
    {
        file = 6;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2
     + EXECPERCENTAGE3 + EXECPERCENTAGE4 + EXECPERCENTAGE5 + EXECPERCENTAGE6
     + EXECPERCENTAGE7)
    {
        file = 7;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2
     + EXECPERCENTAGE3 + EXECPERCENTAGE4 + EXECPERCENTAGE5 + EXECPERCENTAGE6
     + EXECPERCENTAGE7 + EXECPERCENTAGE8)
    {
        file = 8;
    }
    else if (fileRand < EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2
     + EXECPERCENTAGE3 + EXECPERCENTAGE4 + EXECPERCENTAGE5 + EXECPERCENTAGE6
     + EXECPERCENTAGE7 + EXECPERCENTAGE8 + EXECPERCENTAGE9)
    {
        file = 9;
    }
    else
    {
        file = 10;
    }

    printf("\n=============\n");
    printf("\ninitial file: %d\n\n", file);

    int sucess = 0;
    int initialFile = file;
    for (initialFile; initialFile < 11; ++initialFile)
    {
        if(nbProcessusPriority(allocationTable,initialFile)==0)
        {
            file++;
            printf("file++!\n");
            if (file == 11)
            {
                file = 0;
            }
        }
        else 
        {
            sucess = 1;
            break;
        }
    }
    if(sucess == 0)
    {
        for (int z=0; z < initialFile; ++z)
        {
            if(nbProcessusPriority(allocationTable,z)==0)
            {
                file++;
                printf("file++!\n");
            }
            else{
                break;
            }
        }
    }


    printf("\nfinal file: %d\n", file);
    return file;

}
