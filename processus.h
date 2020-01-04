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

ElemProcess initElement(ElemProcess element);
ElemProcess resetElement();
AllocationTable addElement(ElemProcess elementTest, AllocationTable allocationTable);

#endif