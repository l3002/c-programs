#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
  int x = 42;
  int rc = fork();
  if(rc < 0){
    fprintf(stderr, "Error while creating a new process\n");
    exit(1);
  }
  else if(rc == 0){
    printf("child process (id = %d) x - %d\n",(int) getpid(),x);
    x = 32;
    printf("child process (id = %d) x - %d\n",(int) getpid(),x);
  }
  else{
    int rc_wait = wait(NULL);
    printf("parent process of %d (id = %d) x - %d\n",rc,(int) getpid(),x);
    x = 52;
    printf("parent process of %d (id = %d) x - %d\n",rc,(int) getpid(),x);
  }
  return 0;
}
