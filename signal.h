#ifndef SIGNAL_H_INCLUDED

#define SIGNAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sig_handler(int signo);

// nitialise les fonctions à exécuter lors de la réception d’un signal SIGINT ou SIGSTP.
void initSignals();

#endif