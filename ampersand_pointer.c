/*
 * Printing value of a pointer, its address and address of a variable it point to
 */

#include <stdio.h>

int main()
{
	int a = 2;

	int *ptr = &a;

	printf("%d, %p, %p", *ptr, &ptr, &a);
	return 0;
}
