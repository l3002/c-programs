#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
  // opens a file (the call returns a file descriptor)
  int fd = open("./example-1", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
  int rc = fork();
  if(rc < 0){
    fprintf(stderr,"fork: error while creating the process\n");
    exit(1);
  }
  else if(rc == 0){
    printf("child process (id = %d) fd - %d\n",(int) getpid(),fd);
    const void *buff = (const void *) "write from child process\n";
    size_t sbuff = sizeof(char)*26;
    printf("child process (id = %d) %u\n",(int) getpid(),(unsigned int) sbuff);
    write(fd, buff, sbuff);
  }
  else{
    printf("parent process of %d (id = %d) fd - %d\n",rc,(int) getpid(),fd);
    const void *buff = (const void *) "write from parent process\n";
    size_t sbuff = sizeof(char)*27;
    printf("parent process of %d (id = %d) %u\n",rc,(int) getpid() ,(unsigned int) sbuff);
    write(fd, buff, sbuff);
  }
  close(fd);
  return 0;
}
