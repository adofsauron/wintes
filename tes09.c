#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

int a = 0;
int b = 0;
pthread_mutex_t mutex_a;
pthread_mutex_t mutex_b;

void *another(void *arg)
{
	{
		pthread_mutex_lock(&mutex_b);
		printf("thread, got b, waiting for a\n");
		sleep(2);
	}
	++b;
	pthread_mutex_lock(&mutex_a);
	b += a++;
	pthread_mutex_unlock(&mutex_a);
	pthread_mutex_unlock(&mutex_b);
	pthread_exit(NULL);
}

int main()
{
	pthread_t id;
	pthread_mutex_init(&mutex_a, NULL);
	pthread_mutex_init(&mutex_b, NULL);
	pthread_create(&id, NULL, another, NULL);

	pthread_mutex_lock(&mutex_a);
	printf("father, got a, wait for b\n");
	sleep(2);
	++a;
	pthread_mutex_lock(&mutex_b);
	a += b++;
	pthread_mutex_unlock(&mutex_b);
	pthread_mutex_unlock(&mutex_a);

	pthread_join(id, NULL);
	pthread_mutex_destroy(&mutex_a);
	pthread_mutex_destroy(&mutex_b);
}