#include <stdio.h>

int main()
{
	int i = 1;
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (i <= num)
	{
	printf("%d\t", i);
	++i;
	}
	printf("\n");
	return 0;
}
