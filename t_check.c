/*
 * I honestly have no idea why I was doing it like that
 * I have no idea what I was doing either
 */

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{ 
	double interval;
	int i;
	float pi = atan(1)*4;
	for(i = 0; i <=20; i++)
	{ 
		interval = i/10.0;
		  
		printf("sin( %lf * PI ) = %lf\t\tcos( %lf * PI ) = %lf \n", 
			interval, sin(interval*pi), interval, cos(interval*pi));
	}

	printf("\n+++++++\n");
	return 0;
}
