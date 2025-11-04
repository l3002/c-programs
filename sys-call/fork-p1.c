#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  printf("process pid = %d\n",(int) getpid());
  int rc = fork();
  if(rc < 0){
    fprintf(stderr, "Error while creating process\n");
    exit(1);
  }
  else if(rc == 0){
    printf("child process pid = %d\n",(int) getpid());
  }
  else{
    printf("parent of rc %d pid = %d\n", rc ,(int)getpid());
  }
  return 0;
}
