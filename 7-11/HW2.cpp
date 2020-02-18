#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <sys//wait.h>
using namespace std;

void fib(int n){
    int first =  0;
    int next = 0;
    int second = 1;
    for(int c = 0; c < n; c++){
        if(c == 0)
        {
            cout << first << ", ";
            continue;
        }
        if(c == 1)
        {
            cout << second << ", ";
            continue;
        }
        // if(c <= 1){
        //     next = c;
        // }
        next = first + second;
        first = second;
        second = next;
        cout << next << ", ";
        }
}
int main()
{

    pid_t pid = fork();

    if (pid==0)
    {
        cout << "The child and parent process ids are: ";
        cout << getpid() << " and " << getppid() << endl;

        int input = 0;
        do{ cout << "Input fibonacci length" <<endl;
            cin >>  input;

        }while(input < 0); 
        fib(input);
    }
    
    else if (pid > 0)
    {

        wait(NULL);
        exit(0);
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