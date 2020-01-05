#ifndef PROCESSUS_H_INCLUDED

#define PROCESSUS_H_INCLUDED
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>

#include "allocationTable.h"
#include "tableAlloc.h"
#include "elemProcess.h"
#include "share.h"

// Initialise une structure elemProcess avec le temps d’exécution et la 
// priorité généré aléatoirement d’un processus et son PID.
ElemProcess initElement(ElemProcess element);

// Attribue la valeur -1 à toutes les variables d’une structure elemProcess.
ElemProcess resetElement();

//  Ajoute un processus dans la file correspondant à sa priorité.
AllocationTable addElement(ElemProcess elementTest, AllocationTable allocationTable);

#endif