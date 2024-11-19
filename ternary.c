/*
 * Was tryng out ternary operator I guess
 */
#include <stdio.h>

int main()
{
	int c;
	int a = 5;
	int b = 6;
	
	c = (a < b) ? a:b;

	printf("c = %d", c);

	return  0;
}
