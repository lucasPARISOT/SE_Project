#ifndef SIGNAL_H_INCLUDED

#define SIGNAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sig_handler(int signo);
void initSignals();

#endif