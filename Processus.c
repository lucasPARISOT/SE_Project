#include "processus.h"

ElemProcess initElement(ElemProcess element)
{

	pid_t pid = fork();

	srand(time(NULL) + SEED*pid); // Seed

    if(pid == -1)
    {
        perror("fork");
    }
    if(pid == 0){ // CHILD
    	exit(0);
    }
    else { // PARENT	    

	    memset(&element, -1, sizeof(ElemProcess));
	    element.priority = rand()%11;
	    element.execTime = rand()%MAX_EXEC_T+1;
	    element.pid = pid;  	
    }
    wait(NULL);


	// printf("initElement successful\n");  

    return element;
}

ElemProcess resetElement()
{
    ElemProcess element;
    memset(&element, -1, sizeof(ElemProcess));
    return element;
}

AllocationTable addElement(ElemProcess elementTest,AllocationTable allocationTable)
{
	int boolean = 1;

	//printf("priority: %d\n", elementTest.priority);
    switch(elementTest.priority)
    {
        case 0:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,0)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority0[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority0[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority0[i].priority);
                    break;
                }
            }
            break;

        case 1:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,1)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority1[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority1[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority1[i].priority);
                    break;
                }
            }
            break;

        case 2:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,2)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority2[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority2[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority2[i].priority);
                    break;
                }
            }
            break;

        case 3:

            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,3)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority3[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority3[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority3[i].priority);
                    break;
                }
            }
            break;

        case 4:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,4)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority4[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority4[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority4[i].priority);
                    break;
                }
            }
            break;

        case 5:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,5)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority5[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority5[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority5[i].priority);
                    break;
                }
            }
            break;

        case 6:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,6)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority6[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority6[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority6[i].priority);
                    break;
                }
            }
            break;

        case 7:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,7)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority7[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority7[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority7[i].priority);
                    break;
                }
            }
            break;

        case 8:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,8)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority8[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority8[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority8[i].priority);
                    break;
                }
            }
            break;

        case 9:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,9)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority9[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority9[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority9[i].priority);
                    break;
                }
            }
            break;

        case 10:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
                if((nbProcessusPriority(allocationTable,10)+1) > SIZEARRAY)
                {
                    printf("\nPriority array %d is full\n", i);
                    printf("The processus is ignored\n");
                    break;
                }
                if (allocationTable.priority10[i].pid==-1 && boolean==1)
                {
                    allocationTable.priority10[i] = elementTest;
                    boolean = 0;
                    //fprintf(stderr, "elementTest priority: %d\n", allocationTable.priority10[i].priority);
                    break;
                }
            }
            break;         
    }

    return allocationTable;
}