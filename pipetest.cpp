
// C program to demonstrate use of fork() and pipe() 
#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<string.h> 
#include<sys/wait.h> 
#include<iostream>
  
using namespace std;
int main() 
{ 
    int fd2[2]; 
    pid_t pid;
    pid_t parentpid = (int)getpid();
    char result[100];
    char fixed_str[] = "Hello "; 
    char input_str[100];
    pid_t p; 
  
    if (pipe(fd2)==-1) 
    { 
        fprintf(stderr, "Pipe Failed" ); 
        return 1; 
    } 
  
    p = fork(); 
  
    if (p < 0) 
    { 
        fprintf(stderr, "fork Failed" ); 
        return 1; 
    } 
  
    // Parent process 
    else if (p > 0) 
    { 
        
        cout << "The child and parent process ids are: ";
        cout << getpid() << " and " << getppid() << endl;  
        cout << "Please enter a name: ";
        cin >> input_str;
        strcat(fixed_str, input_str);
        write(fd2[1],fixed_str,100);
        close(fd2[1]); // Close writing end of second pipe
    } 
  
    // child process 
    else
    { 
        
        read(fd2[0], result, 100);
        cout << result << endl;
        close(fd2[0]);
        cout << "The child and parent process ids are: ";
        cout << getpid() << " and " << getppid() << endl;
        exit(0); 
    } 
} 
