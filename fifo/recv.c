#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    mkfifo("desd", S_IRUSR | S_IWUSR);
    unsigned char rbuff[64];
    int fd;

    fd=open("desd", O_RDONLY);

    read(fd, rbuff, 64);

    printf("Reading in Receiver: %s\n", rbuff);
    
    close(fd);

    return 0;
}