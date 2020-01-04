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
    printf("\n");
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

    if(isTableEmpty(allocationTable)==1)
    {
        printf("\n\nThere are 0 processus on the table\n");
        exit(-1);
    }

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

    
    //printf("\ninitial file: %d\n\n", file);

    int sucess = 0;
    int initialFile = file;
    int initialFile2 = file;
    for (initialFile; initialFile < 11; ++initialFile)
    {
        if(nbProcessusPriority(allocationTable,file)==0)
        {
            file++;
            //printf("file++!\n");
            if (file == 11)
            {
                file = 1;
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
        for (int z=file; z < initialFile2; ++z)
        {
            if(nbProcessusPriority(allocationTable,z)==0 && sucess == 0)
            {
                file++;
                //printf("file++!\n");
                if (file == 11)
                {
                    file = 1;
                }
            }
            else{
                sucess = 1;
                break;
            }
        }
    }
    if(nbProcessusPriority(allocationTable,0)!=0 && sucess == 0){
        file = 0;
    }


    printf("\nFile: %d\n", file);
    return file;

}

void checkingPercentage()
{
    int sum = EXECPERCENTAGE0 + EXECPERCENTAGE1 + EXECPERCENTAGE2
     + EXECPERCENTAGE3 + EXECPERCENTAGE4 + EXECPERCENTAGE5 + EXECPERCENTAGE6
     + EXECPERCENTAGE7 + EXECPERCENTAGE8 + EXECPERCENTAGE9 + EXECPERCENTAGE10;
    if (sum != 100)
    {
        printf("\nPercentage incorect, sum is: %d\n", sum);
        exit(-1);
    }
}

void algorithm(AllocationTable allocationTable)
{
    int quantumDate = 0;
    pid_t pid;

    int fd[2];
    if (pipe(fd) < 0)
    {
        perror("Pipe");
        exit(-1);
    }

    pid = fork();
    if(pid == -1)
    {
        perror("fork");
    }
    if(pid != 0){ // PARENT

        close(fd[0]);
        while(1){
            int random;
            random = rand()%100;
            //printf("random: %d\n", random);
            write(fd[1], &random, sizeof(random));
            sleep(QUANTUM);
        }
        wait(NULL); 
        exit(0);
    }
    else // CHILD 
    {
        srand(time(NULL) + 96*pid);
        close(fd[1]);
        while(1)
        {
            printf("\n=============");
            int value = 0;
            read(fd[0], &value, sizeof(value));
            if(value > 80){
                allocationTable = createNbProcess(allocationTable, quantumDate, 1);
                printf("New processus created!\n");
            }                    

            
            printf("\nquantumDate: %d", quantumDate);
            int file = priorityArray(allocationTable);

            switch(file)
            {
                case 0:

                    allocationTable.priority0[0].execTime--;
                    if (allocationTable.priority0[0].execTime > 0)
                    {
                        allocationTable.priority0[0].priority++;
                        allocationTable = addElement(allocationTable.priority0[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority0[0].pid
                            , allocationTable.priority0[0].priority, allocationTable.priority0[0].execTime);
                        printf("=============\n");
                        
                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority0[i] = allocationTable.priority0[i+1]; 
                        }
                        allocationTable.priority0[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority0[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority0[i] = allocationTable.priority0[i+1];  
                        }
                        allocationTable.priority0[SIZEARRAY-1] = resetElement();
                    }
                    break;

                case 1:

                    allocationTable.priority1[0].execTime--;
                    if (allocationTable.priority1[0].execTime > 0)
                    {
                        allocationTable.priority1[0].priority++;
                        allocationTable = addElement(allocationTable.priority1[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority1[0].pid
                            , allocationTable.priority1[0].priority, allocationTable.priority1[0].execTime);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority1[i] = allocationTable.priority1[i+1];  
                        }
                        allocationTable.priority1[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority1[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority1[i] = allocationTable.priority1[i+1];   
                        }
                        allocationTable.priority1[SIZEARRAY-1] = resetElement();
                    }
                    break;

                case 2:

                    allocationTable.priority2[0].execTime--;
                    if (allocationTable.priority2[0].execTime > 0)
                    {
                        allocationTable.priority2[0].priority++;
                        allocationTable = addElement(allocationTable.priority2[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority2[0].pid
                            , allocationTable.priority2[0].priority, allocationTable.priority2[0].execTime);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority2[i] = allocationTable.priority2[i+1]; 
                        }
                        allocationTable.priority2[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority2[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority2[i] = allocationTable.priority2[i+1];  
                        }
                        allocationTable.priority2[SIZEARRAY-1] = resetElement();
                    }
                    break;

                case 3:

                    allocationTable.priority3[0].execTime--;
                    if (allocationTable.priority3[0].execTime > 0)
                    {
                        allocationTable.priority3[0].priority++;
                        allocationTable = addElement(allocationTable.priority3[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority3[0].pid
                            , allocationTable.priority3[0].priority, allocationTable.priority3[0].execTime);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority3[i] = allocationTable.priority3[i+1]; 
                        }
                        allocationTable.priority3[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority3[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority3[i] = allocationTable.priority3[i+1];  
                        }
                        allocationTable.priority3[SIZEARRAY-1] = resetElement();
                    }
                    break;
            
                case 4:

                    allocationTable.priority4[0].execTime--;
                    if (allocationTable.priority4[0].execTime > 0)
                    {
                        allocationTable.priority4[0].priority++;
                        allocationTable = addElement(allocationTable.priority4[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority4[0].pid
                            ,allocationTable.priority4[0].priority, allocationTable.priority4[0].execTime);
                        printf("=============\n");
                        
                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority4[i] = allocationTable.priority4[i+1];
                        }
                        allocationTable.priority4[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority4[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority4[i] = allocationTable.priority4[i+1];
                        }
                        allocationTable.priority4[SIZEARRAY-1] = resetElement();
                    }
                    break;
                
                case 5:

                    allocationTable.priority5[0].execTime--;
                    if (allocationTable.priority5[0].execTime > 0)
                    {
                        allocationTable.priority5[0].priority++;
                        allocationTable = addElement(allocationTable.priority5[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority5[0].pid
                            ,allocationTable.priority5[0].priority, allocationTable.priority5[0].execTime);
                        printf("=============\n");
                        
                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority5[i] = allocationTable.priority5[i+1]; 
                        }
                        allocationTable.priority5[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority5[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority5[i] = allocationTable.priority5[i+1];  
                        }
                        allocationTable.priority5[SIZEARRAY-1] = resetElement();
                    }
                    break;
                
                case 6:

                    allocationTable.priority6[0].execTime--;
                    if (allocationTable.priority6[0].execTime > 0)
                    {
                        allocationTable.priority6[0].priority++;
                        allocationTable = addElement(allocationTable.priority6[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority6[0].pid
                            ,allocationTable.priority6[0].priority, allocationTable.priority6[0].execTime);
                        printf("=============\n");
                        
                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority6[i] = allocationTable.priority6[i+1];  
                        }
                        allocationTable.priority6[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority6[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority6[i] = allocationTable.priority6[i+1]; 
                        }
                        allocationTable.priority6[SIZEARRAY-1] = resetElement();
                    }
                    break;

                case 7:

                    allocationTable.priority7[0].execTime--;
                    if (allocationTable.priority7[0].execTime > 0)
                    {
                        allocationTable.priority7[0].priority++;
                        allocationTable = addElement(allocationTable.priority7[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority7[0].pid
                            ,allocationTable.priority7[0].priority, allocationTable.priority7[0].execTime);
                        printf("=============\n");
                        
                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority7[i] = allocationTable.priority7[i+1];  
                        }
                        allocationTable.priority7[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority7[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority7[i] = allocationTable.priority7[i+1];  
                        }
                        allocationTable.priority7[SIZEARRAY-1] = resetElement();
                    }
                    break;

                case 8:

                    allocationTable.priority8[0].execTime--;
                    if (allocationTable.priority8[0].execTime > 0)
                    {
                        allocationTable.priority8[0].priority++;
                        allocationTable = addElement(allocationTable.priority8[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority8[0].pid
                            ,allocationTable.priority8[0].priority, allocationTable.priority8[0].execTime);
                        printf("=============\n");
                        
                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority8[i] = allocationTable.priority8[i+1]; 
                        }
                        allocationTable.priority8[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority8[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority8[i] = allocationTable.priority8[i+1]; 
                        }
                        allocationTable.priority8[SIZEARRAY-1] = resetElement();
                    }
                    break;

                case 9:

                    allocationTable.priority9[0].execTime--;
                    if (allocationTable.priority9[0].execTime > 0)
                    {
                        allocationTable.priority9[0].priority++;
                        allocationTable = addElement(allocationTable.priority9[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority9[0].pid
                            ,allocationTable.priority9[0].priority, allocationTable.priority9[0].execTime);
                        printf("=============\n");
                        
                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority9[i] = allocationTable.priority9[i+1];  
                        }
                        allocationTable.priority9[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority9[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority9[i] = allocationTable.priority9[i+1];  
                        }
                        allocationTable.priority9[SIZEARRAY-1] = resetElement();
                    }
                    break;

                case 10:

                    allocationTable.priority10[0].execTime--;
                    if (allocationTable.priority10[0].execTime > 0)
                    {
                        allocationTable.priority10[0].priority = 0;
                        allocationTable = addElement(allocationTable.priority10[0], allocationTable);
                        printf("The processus %d is now on priority %d with %d quantum left\n", allocationTable.priority10[0].pid
                            ,allocationTable.priority10[0].priority, allocationTable.priority10[0].execTime);
                        printf("=============\n");
                        
                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority10[i] = allocationTable.priority10[i+1]; 
                        }
                        allocationTable.priority10[SIZEARRAY-1] = resetElement();
                    }
                    else 
                    {
                        printf("The processus %d ended\n", allocationTable.priority10[0].pid);
                        printf("=============\n");

                        for (int i = 0; i < SIZEARRAY-1; ++i)
                        {
                            allocationTable.priority10[i] = allocationTable.priority10[i+1];  
                        }
                        allocationTable.priority10[SIZEARRAY-1] = resetElement();
                    }
                    break;
            }

            quantumDate++;
            sleep(QUANTUM);
        }
        exit(-1);
    }

    
}

int isTableEmpty(AllocationTable allocationTable)
{

    int nbElement = 0;
    for (int i = 0; i < 11; ++i)
    {
        nbElement += nbProcessusPriority(allocationTable,i);
    }
    printf("\nnbElement: %d\n", nbElement);
    return nbElement == 0;

}