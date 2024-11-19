/*
 * I've been trying to understand either case statements can be just expressions
 * And wanted to check either function call is an expression
 * Turned out that every expression is an expression statement if followed by a ;
 */


#include <stdio.h>

void square_print(int b)
{
	b = 5; 
	printf("%d\n", b);	
}

int main()
{
	int a = 0;
	switch(2){
		case 1: a = 1;
			break;
		case 2: square_print(2);//a = 2;
			break;	
	}

	printf("%d\n", a);

	return 0;
}
