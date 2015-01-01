#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void *another(void *arg)
{
	int i;
	for(i=0; i<5; i++)
	{
		printf("i: %d\n", i);
		sleep(1);
	}
}

int main()
{
	//pthread_t id;
	//pthread_create(&id, NULL, another,NULL);
	another(void);

	int x;
	for(x=0; x<5; x++)
	{
		printf("x: %d\n", x);
		sleep(1);
	}
	return 0;
}