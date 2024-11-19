/*
 * Practising Writing user input in a file and reading this file using 
 * while loops with stdin/put functionsi and error handlers
 */

#include <stdio.h>

int main() 
{
	// I didn't know yet that it's better to initialize to NULL than to simply declare
	FILE *fp;
	char ch;

	fp = fopen("hello.txt", "w");
	if (fp == NULL) {
		printf("Error opening file!\n");
		return 1;
	}
	printf("Enter data (Ctrl+D to finish):\n");

	while ((ch = getchar()) != EOF) {
		fputc(ch, fp);
	}
	fclose(fp);

	fp = fopen("hello.txt", "r");
	if (fp == NULL){ 
		printf("Error opening file for reading!\n");
		return 1;
	}

	printf("\nContents of the file:\n");
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}

	fclose(fp);
	return 0;
}
