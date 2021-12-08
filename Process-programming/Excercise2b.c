#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
	fork();
	fork();
	fork();
	printf("CSC 205: Operating Stystems I \n");
	//printf("\n");
	return 0;
}
