#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
  int rc = fork();
  if(rc < 0){
    fprintf(stderr,"forK: error while creating process\n");
    exit(1);
  }
  else if(rc == 0){
    printf("child process (id = %d)\n",(int) getpid());
    printf("Changing program image for child...\n");
    char *argv[2];
    argv[0] = strdup("/bin/ls");
    argv[1] = NULL;
    execv(argv[0], argv);
  }
  else{
    printf("parent process of %d (id = %d)\n", rc, (int) getpid());
    printf("a printf call from parent process\n");
  }
  return 0;
}
