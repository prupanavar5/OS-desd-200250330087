#include <stdio.h>
 #include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;
    int pfd[2];
    unsigned char rbuff[128];

    pipe(pfd);

    id=fork();
    //statement below this are applicable to both parent and child

    if(0==id)
    {   //in child
        read(pfd[0], rbuff, 128);

        printf("Child: %s\n", rbuff);

        close(pfd[0]);
    }
    else
    {   //in parent
        write(pfd[1], "cdac\n", 5);

        close(pfd[1]);
    }
    return 0;
}