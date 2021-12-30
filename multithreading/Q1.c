//-------------- By mahmoud hamdy---------------
//Write a program that runs 5 threads

#include <pthread.h>  //threads
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int sum = 0  ;                //summation
void* code_thread ( void * param )
{ int low = 1 ;  
 int up= 10 ;
 srand(time(0));
 sum= sum + ( (rand() % (up - low +1 )) + low );

}
int main ()
{
pthread_t thread[5];
for ( int i =0 ; i<5 ; i++)
{
pthread_create( &thread[i], 0,code_thread,0 );
 

}

for (int i = 0; i<5; i++)
{
pthread_join (thread[i],0);
}

printf(" sum is = %d ", sum);

}
