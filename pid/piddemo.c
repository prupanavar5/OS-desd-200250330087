       #include <sys/types.h>
       #include <unistd.h>
	#include <stdio.h>

int main(int argc, char const *argv[])
{
pid_t id;
pid_t parent_id;

id= getpid();
parent_id= getppid();

printf("PID=%d \t PPID=%d\n", id, parent_id);

return 0;
}
