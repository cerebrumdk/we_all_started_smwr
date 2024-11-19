/*
 * Checked how fputs works, then
 * desided to print it directly to console.
 */

#include <stdio.h>

int main()
{
	char input[50]= "User input\n";
	FILE* fp;

	//fp = fopen("fputs_stdin.txt", "w");
	
	fputs(input, stdout);
	// fclose(fp);

	return 0;
}

