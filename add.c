/* 
 * Small addition program
*/

#include <stdio.h>

int main()
{
	float a, b, c, sum = 0.0;
	printf("Input 3 float numbers: \n");
	scanf("%f%f%f", &a, &b, &c);
	printf("Your numbers: %f, %f, %f\n", a, b, c);

	sum = a + b + c;
	printf("%f + %f + %f = %f\n", a, b, c, sum);	

	return 0;
}
