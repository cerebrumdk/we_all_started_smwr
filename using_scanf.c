/*
 * Was trying out scanf :)
 */

#include <stdio.h>

int main()
{
	int x;
	double y;
	char c;
	int result = scanf("%d, %lf, %c", &x, &y, &c);
	printf("%d, %d, %lf, %c", result, x, y, c);

	return 0;
}
