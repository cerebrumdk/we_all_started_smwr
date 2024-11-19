/*
 * Script to check either break will make us jump out of if or for
 * From for btw
 * The break statement is specifically designed to exit loops or terminate a switch statement.
 */

#include <stdio.h>

int main()
{
	for(int i = 0; i < 10; i++){
		if(i == 5){
			break;
		}
		printf("%d\n", i);
	}

	return 0;
}
