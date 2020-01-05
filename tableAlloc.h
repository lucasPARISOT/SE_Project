#ifndef TABLEALLOC_H_INCLUDED

#define TABLEALLOC_H_INCLUDED
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>

#include "allocationTable.h"
#include "processus.h"

#define NBPRIORITY 10

// Initialise la table d’allocation CPU.
AllocationTable initAlloc(AllocationTable allocationTable);

// Créer un certain nombre de processus pour date de soumission 0.
AllocationTable createProcess(AllocationTable allocationTable);

// Créer nbProcess processus avec pour date de soumission quantumDate.
AllocationTable createNbProcess(AllocationTable allocationTable, int quantumDate, int nbProcess);

// Renvoie le nombre de processus dans une file.
int nbProcessusPriority(AllocationTable allocationTable, int priority);

// Vérifie si toutes les files sont vides.
int isTableEmpty(AllocationTable allocationTable);

// Renvoie la priorité d’une file pour exécuter un processus.
int priorityArray(AllocationTable allocationTable);

// Vérifie si la somme des pourcentages associés à chaque priorité.
// n’est pas supérieur à 100.
void checkingPercentage();

// Réalise la simulation du Round Robin.
void algorithm(AllocationTable allocationTable);

#endif