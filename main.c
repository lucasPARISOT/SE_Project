#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

#include "share.h"
#include "signal.h"
#include "tableAlloc.h"
#include "processus.h"

int main(int argc, char const *argv[])
{

    srand(time(NULL));

    initSignals();

    AllocationTable allocationTable = initAlloc(allocationTable);

    allocationTable = createNbProcess(allocationTable,1,10);
    //allocationTable.priority5[0].pid = 15674;

    //printf("quantumDate: %d\n", allocationTable.priority0[0].quantumDate);

    // Algorithme
    while(1)
    {

        
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

        sleep(QUANTUM);

    }











    /*
    for (int i = 0; i < 11; ++i)
    {
        nbProcessusPriority(allocationTable,i);
    }
    */
    
    /*          // TEST PRIORITE PID
    printf("\nTEST PRIORITY 0\n\n");
    for(int i = 0; i < 10; ++i)
    {
        printf("i = %d pid: %d\n", i, allocationTable.priority0[i].pid);
    }
    */  

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

    exit(EXIT_SUCCESS);
}