#include <stdio.h>
int main() 
{
	int number;
	printf("Enter a number: "); 
	scanf("%d", &number);

// True if the remainder is 0 
	if (number%2 == 0) 
	{
		printf("%d is an even number.\n",number); 
	} 
	else 
	{
		printf("%d is an odd number.\n",number);
	}

	return 0;

}
