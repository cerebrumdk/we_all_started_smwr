/*
 * Was checking what would happen if I printed 
 * uninitialized variable
 */

#include <stdio.h>

int main()
{
	double x;
	printf("%lf", x);

	return 0;
}
