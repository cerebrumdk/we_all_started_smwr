/* 
 * Checking pre/post increment in for loop
 */
#include <stdio.h>

int main()
{
	for(int i = 0; i < 5; i++){
		printf("%d\n", i);
	}
	for(int j = 0; j < 5; ++j){
		printf("%d\n", j);
	}

	return 0;
}
