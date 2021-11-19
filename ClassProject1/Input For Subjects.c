#include <stdio.h>

int main()
{
	int C21, C25, S25, total, avg;
	float perc1, perc5, pers5;
	
	printf("\n Enter the score for CSC 201: ");
	scanf("%d", &C21);
	printf("\n Enter the score for CSC 205: ");
	scanf("%d", &C25);
	printf("\n Enter the score for STA 205: ");
	scanf("%d", &S25);
	
	total = C21 + C25 + S25;
	avg = total/3;
	perc1 = (float)C21/total * 100;
	perc5 = (float)C25/total * 100;
	pers5 = (float)S25/total * 100;
	
	printf("\n The total score is: %d marks", total);
	printf("\n The average score is: %d marks", avg);
	printf("\n The percentage of CSC 201 is: %.2f%%", perc1);
	printf("\n The percentage of CSC 205 is: %.2f%%", perc5);
	printf("\n The percentage of STA 205 is: %.2f%% \n", pers5);
	
	return 0;
	
}
