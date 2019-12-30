#include "processus.h"

ElemProcess initElement(ElemProcess element)
{

    memset(&element, -1, sizeof(ElemProcess));
    element.priority = rand()%11;
    element.execTime = rand()%20+1;

    // printf("initElement successful\n");

    return element;
}

void addElement(ElemProcess elementTest,AllocationTable allocationTable)
{
	int boolean = 1;

    switch(elementTest.priority)
    {
        case 0:
            for (int i = 0; i < SIZEARRAY; ++i)
            {
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
}