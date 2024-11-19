/*
 * Script to check implicit convertions 
 * and behaviour of double main
 */

#include <stdio.h>

double main()
{
	int a = 3, b = 4, c = 0, d = '1';

	// Since two integers are divided, we get an integer 0, 
	// which then converted to float because of <division> type
	// As you can see, 0.75 got rounded to the base number. 
	float division = a / b;
	printf("%f\n", division); // 0.000

	int r = division > c;
	printf("%d\n", r);

	int float_div_comp = ((float) a / b) > c ;
	printf("float_div_comp = %d\n", float_div_comp);

	return 0;
}
