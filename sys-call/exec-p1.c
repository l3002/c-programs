#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

// uses execlp() to replace process image

int main(int argc, char *argv[])
{
  printf("process id - %d\n",(int) getpid());

  // creating child process
  int rc = fork();

  if(rc < 0){
    fprintf(stderr, "fork: failed to create a new process\n");
    exit(1);
  }
  else if(rc == 0){
    printf("child process id - %d\n",(int) getpid());
    printf("Executing wc on exec-p1.c\n");
    // should replace the process image of child process
    execlp("wc","wc","./exec-p1.c",(char *) NULL);
    printf("shouldn't be printed\n");
  }
  else{
    wait(NULL);
    printf("parent of %d (process id - %d)\n",rc, (int) getpid());
    int x = 293;
    int y = 339;
    printf("The sum of %d and %d = %d\n",x,y,x + y);
  }

  // this should only be printed by parent process
  printf("this is parent process id - %d\n",(int) getpid());

  return 0;
}
