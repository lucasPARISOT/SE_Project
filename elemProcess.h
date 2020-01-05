#ifndef ELEMPROCESS_H_INCLUDED

#define ELEMPROCESS_H_INCLUDED
#include <sys/types.h>
#include <unistd.h>

typedef struct ElemProcess
{
    int priority;
    int quantumDate;
    int execTime;
    pid_t pid;
} ElemProcess;

#endif
