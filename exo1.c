#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int nbr=0;

void f_handler(int sig)
{
	
}
void tourte(int sig)
{
	nbr++;
	printf("Pourquoi tu me parle quand je t'ignore ?\n");
	if(nbr>10)
		printf("Serieux ?");
}

int main () {
	signal(SIGHUP,tourte);
	
    printf("Processus %d en attente de signaux...\n", getpid());
    while (1) {
   	 sleep(5);
    }
    return(0);
}
