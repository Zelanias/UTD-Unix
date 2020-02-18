#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <pthread.h>
#define NUM_THREADS 4
using namespace std;

void *DoNothing(void *threadid) {
   long tid;
   
   tid = (long)threadid;
   
   pthread_exit(NULL);
}

int main () {
   pthread_t threads[NUM_THREADS];
   int rc;
   int i;
   
   for( i = 0; i < NUM_THREADS; i++ ) {
      cout << "Hello, World! from threadid:  " << i << endl;
      rc = pthread_create(&threads[i], NULL, DoNothing, (void *)i);
      cout << "The child and parent process ids are: ";
   cout << getpid() << " and " << getppid() << endl;
      if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}