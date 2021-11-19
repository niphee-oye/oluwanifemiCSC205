#include <stdio.h>

int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age < 18)
	{
	printf("You cannot vote! \n");
	}
	else
	{
	printf("You can vote! \n");
	}
	return 0;
}
