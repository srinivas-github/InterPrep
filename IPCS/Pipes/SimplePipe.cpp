/**
 * 1. Pipes provides a one-way flow of data. Pipe is created by "pipe" system call.
 * 2. Two file descriptors are returned - fd[0] which is open for reading.
 *   fd[1] - which is open for writing
 */

 /**
  * The biggest disadvantage with pipes is that they can only be used between processes 
  * that have a parent process in common. This is because pipe is passed from one process
  * to another process by the "fork" system call. There is no way for two unrelated processes
  * to create a pipe between them and use it for IPC.
   */
#include <stdlib.h>

int main()
{
    int pipefd[2], n;
    char buf[100];

    if ( pipe(pipefd) < 0 )
        perror("pipe error:");

    if ( write(pipefd[1]m "Hello World\n", 12) != 12)
        perror("write error");

    if ( (n = read(pipefd[0], buf, sizeof(buf))) <= 0)
        perror("read error");

    write(1, buf, n); //1 - stdout
    return 0;
}



    
