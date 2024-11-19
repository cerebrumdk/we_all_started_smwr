/* 
 * Simple circle program 
 * to calculate Diameter
*/

#include <stdio.h>
#define PI 3.14159

int main()
{
	float r, d, a = 0;

	printf("Input the radius of your circle: \n");
	scanf("%f", &r);
	d = 2 * r;
	a = PI * r *r;

	printf("Your Diameter: 2 * %f = %f\n", r, d);  
	printf("Your Area: PI * %f * %f = %f\n", r, r, a);	

	return 0;
}
