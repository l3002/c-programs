#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
  printf("process id - %d\n", (int) getpid());

  int rc = fork();

  int x = 10;
  int y = 20;

  if(rc < 0){
    fprintf(stderr, "fork : failed to create a process\n");
    exit(1);
  }
  else if(rc == 0){
    printf("child process id - %d\n",(int) getpid());
  }
  else{
    printf("Waiting for child process...\n");
    int rc_wait = wait(NULL);
    printf("parent of %d (process id - %d)\n", rc , (int) getpid());
  }
  printf("process id - %d & x + y = %d\n",(int) getpid(),x+y);

  return 0;
}
