#include <signal.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h> 

typedef void (*fun)(void);

void handle(void)
{

	printf("sig\n");
}

int main()
{
	fun work;
	work = handle;
	work();

	asm volatile
	(
		"call %0"
		:
		:"a"(handle)
	);

	int pid = fork();

	if(pid>0)
	{
		printf("father, pid: %d\n", pid);
	}
	else
	{
		printf("child, pid:%d\n", pid);
	}
	getchar();
	return 0;
}
