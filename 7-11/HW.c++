#include <stdio.h>
#include <unistd.h>
#include <iostream>
using namespace std;
int main()
{
    pid_t pid = fork();
    	
    if (pid == 0)
    {
    	// child process
    	cout << "Hello World!!! ";
    	cout << "The child and parent process ids are: ";
        cout << getpid() << " and " << getppid();
        
    }
    else if (pid > 0)
    {
        // parent process
     
    }
    else
    {
        // fork failed
     	fprintf(stderr, "Fork Failed");
        exit(-1);
    }
    return 0;
}