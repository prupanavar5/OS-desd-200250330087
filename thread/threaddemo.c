#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int count= 0;
void *thread(void *arg)
{
    //count++;
    printf("Thread\n");
} 

int main(int argc, char const *argv[])
{   
    pthread_t tid;
    //count++;
    printf("Before thread creation\n");
    pthread_create(&tid, NULL, thread, NULL);
    printf("After thread creation\n");
    sleep(1);

     return 0;
}