#include <stdio.h>

int main()
{
	char chr;
	printf("Enter a character: ");
	scanf("%c", &chr);
	
	// When %c is used, a character is displayed
	printf("ASCII value is %c.", chr);
	
	// When %d is used, ASCII value is displayed
	printf("ASCII value is %d.", chr);
	return 0;
}