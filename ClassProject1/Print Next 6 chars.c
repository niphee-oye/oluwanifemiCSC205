#include <stdio.h>
#include <math.h>

int main()
{
	char all[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
	int n; char j;
	
	up:
		printf("Enter a letter between A and J: "); 
		scanf("%c", &j);
		
		if (j == 'A' || j == 'a')
		{n = 0;}
		
		else if (j == 'B' || j == 'b')
		{n = 1;}
		
		else if (j == 'C' || j == 'c')
		{n = 2;}
		
		else if (j == 'D' || j == 'd')
		{n = 3;}
		
		else if (j == 'E' || j =='e')
		{n = 4;}
		
		else if (j == 'F' || j == 'f')
		{n = 5;}
		
		else if (j == 'G' || j == 'g')
		{n = 6;}
		
		else if (j == 'H' || j == 'h')
		{n = 7;}
		
		else if (j == 'I' || j == 'i')
		{n = 8;}
		
		else if (j == 'J' || j == 'j')
		{n = 9;}
		
		else
		{
		printf("Invalid input! \n\n");
		goto up;
		}
		
	
	for (int i = n; i < n+7; i++)
	{
		printf("%c ", all[i]);
	}
	printf("\n\n");
	
	return 0;
}
