#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    mkfifo("desd", S_IRUSR | S_IWUSR);
    int fd;
    fd=open("desd", O_WRONLY);

    write(fd, "cdac\n", 5);
    close(fd);

    return 0;
}
