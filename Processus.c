#include "processus.h"

ElemProcess initElement(ElemProcess element)
{

    memset(&element, 0, sizeof(ElemProcess));
    element.priority = 3; //rand()%11;
    element.execTime = rand()%20+1;

    return element;
}