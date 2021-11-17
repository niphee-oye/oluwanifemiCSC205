#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// A normal C function that is executed as a thread
// when its name is specified in pthread_create()

void *myFirstThread()
{
	sleep(1);
	printf("I am the thread\n");
	return NULL;
}

int main()
{
	pthread_t thread_id;
	printf("Before thread execution\n");
	pthread_create(&thread_id, NULL, myFirstThread, NULL);
	printf("After thread execution\n");
	exit(0);
}
