#include "signal.h"

void sig_handler(int signo) 
{
    if (signo == SIGINT)
    {
        printf("\nreceived SIGINT signal (CTRL-C)\n");
        printf("End of program\n\n");
        exit(-1);
    }
    else if (signo == SIGTSTP)
    {
        printf("\nreceived SIGTSTP signal (CTRL-Z)\n");
        printf("End of program\n\n");
        exit(-1);
    }
}

void initSignals(){
    if (signal(SIGINT, sig_handler) == SIG_ERR)
    {
        printf("\ncan't catch SIGUSR1\n");
    }
    if (signal(SIGTSTP, sig_handler) == SIG_ERR)
    {
        printf("\ncan't catch SIGTSTP\n");
    }
}