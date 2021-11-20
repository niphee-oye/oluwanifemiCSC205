#include <stdio.h>

int main()
{
	int age;
	char exp;
	
	printf("\n Are you experienced? y/n: ");
	scanf("%s", &exp);
	printf("\n Please enter your age: ");
	scanf("%d", &age);
	
	while (exp == 'y')
	{
		if (age >= 40)
		{
		printf("\n Your salary is: N560,000\n");
		}	
		
		else if (age < 30)
		{
		printf("\n Your salary is: N300,000\n");
		}
		
		else if (30 <= age < 40)
		{
		printf("\n Your salary is: N480,000\n");
		}
		return exp;
	}	
	
	while (exp == 'n')
	{
		printf("\n Your salary is: N100,000\n");
		return exp;
	}
		
		
	
}
