#include <pthread.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <iostream>

using namespace std;
void *maxnum = malloc(sizeof(int));
void *runner(void *param); /*the thread*/
void *fib(void *ptr);

int main (int argc, char *arg[])
{
  int pid;
  pthread_t tid;
  pthread_attr_t attr;
  int temp;
  cout << "Enter number of fibbonaci numbers to calculate: ";
  do{
    cin >> temp;
    *((int*)maxnum) = temp;
  }while(temp<0);
  pid = fork();

  if (pid == 0) { /*child process*/
    pthread_attr_init(&attr);
    cout << "Thread runner Starting." <<endl;
    pthread_create(&tid, &attr, runner, maxnum);
    pthread_join(tid, NULL);
    cout << "Thread fib Starting." <<endl;
    pthread_create(&tid, &attr, fib, maxnum);
    pthread_join(tid, NULL);
  }
  else if (pid > 0) { /*parent process*/

    wait(NULL);
  
  }
}
void *fib(void *ptr){
  int temp = *((int*)ptr);
  int first =  0;
  int next = 0;
  int second = 1;
  int arr[temp];
  for(int c = 0; c < temp; c++){
      if(c == 0)
      {
          cout << first << ", ";
          continue;
      }
      if(c == 1)
      {
          cout << second;
          continue;
      }
      next = first + second;
      first = second;
      second = next;
      cout << ", " << next;
      }
      cout<<endl;
  cout << "Thread fib Finished." <<endl;
  pthread_exit(0);
   
}
void *runner(void *ptr) {
  int temp = *((int*)ptr);
  int first =  0;
  int next = 0;
  int second = 1;
  int sum = 0;
  for(int c = 0; c < temp; c++){
      if(c == 0)
      {
          sum += 0;
          continue;
      }
      if(c == 1)
      {
          sum += 1;
          continue;
      }
      next = first + second;
      first = second;
      second = next;
      sum += next;
      }
  cout << "The Sum of the first " << temp << " fib numbers are: " << sum << endl;
  cout << "Thread runner Finished." <<endl;
  pthread_exit(0);
}