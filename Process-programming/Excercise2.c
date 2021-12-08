#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	fork();
	printf("Called for() system call \n");
	return 0;
} 
