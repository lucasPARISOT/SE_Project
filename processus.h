#ifndef PROCESSUS_H_INCLUDED

#define PROCESSUS_H_INCLUDED
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "allocationTable.h"
#include "elemProcess.h"
#include "share.h"

ElemProcess initElement(ElemProcess element);
void addElement(ElemProcess elementTest, AllocationTable allocationTable);

#endif