#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

static void signal_handler(int signo){
  printf("Catch SIGINT! : %d\n",signo);
  exit(1);
}

int main(void){
  if (signal(SIGINT,signal_handler) == SIG_ERR){
    printf("Can't catch SIGINT!\n");
    exit(EXIT_FAILURE);
  }

  for (;;) {
    printf("going to sleep for a second...\n");
    sleep(1);
  }
  return 0;
}


// signal handler 무시 : signal(SIGINT,SIG_IGN)
