#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int count= 0;
void *thread(void *arg)
{
    count++;
    printf("Thread %d\n",count);
} 

int main(int argc, char const *argv[])
{   
    pthread_t tid;
    count++;
    printf("Before thread creation %d\n", count);
    pthread_create(&tid, NULL, thread, NULL);
    printf("After thread creation %d\n", count);
    sleep(1);

     return 0;
}