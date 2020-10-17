    #include <sys/types.h>
    #include <unistd.h>
	#include <stdio.h>
    
    

    int main(int argc, char const *argv[])
    {
        int count= 0;
        pid_t id;

       // printf("Before Fork");

        id= fork();

       // printf("\nAfter Fork \t ID \t PID \t PPID \t%d \t%d \t%d\n",id, getpid(), getppid() );

        if(0==id)
        {
            
            //printf("In child %d %d\n", getpid(), getppid());
            printf("count in child %d\n", count);
        }else
        {
            count++;
            printf("count in parent %d\n", count);
            //printf("In parent %d %d\n", getpid(), getppid());
        }
        return 0;
    }