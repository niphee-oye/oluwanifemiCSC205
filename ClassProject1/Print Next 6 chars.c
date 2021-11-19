#include <stdio.h>
int main() 
{
    char c;
    printf("Enter a character in the alphabets between 'a' and 'j'.\n");
    scanf("%c", &c);
 	
 	for ( c >= 'a'; c <= 'j'; ++c )
     	printf("%c", c);
 
    return 0;
}
