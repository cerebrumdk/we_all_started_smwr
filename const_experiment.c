/*
 * I learnt that const doesn't turn a variable into a real constant, but rather read-only,
 * so decided to check how read-only error looks like
 * error: assignment of read-only variable ‘a’ btw.
 */

#include <stdio.h>

int main()
{
	const int a = 0;
	a = 333;
	printf("%d\n", a);

	return 0;
}
