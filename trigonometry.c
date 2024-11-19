#include <stdio.h>
#include <math.h>

int main()
{
	/* Prints a table of values for sine and cosine between (0,1) */
	
	double number = 0.0;
	double sin_number = 0.0;
	double cos_number = 0.0;

	for(number; number <= 1.0; number += 0.1){ 
		// I'm adding number to initialisation despite initialising it earlier simply for readability's sake
		// I decided to increment by 0.1 since otherwise the table would be too big.
		
		sin_number = sin(number);
		printf("sin of %lf is: %lf\n", number, sin_number);

		cos_number = cos(number);
		printf("cos of %lf is: %lf\n\n", number, cos_number);	
	}	

	return 0;
}
