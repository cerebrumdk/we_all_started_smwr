/*
 * Script to write into a file and the read from it with fgets
 */

#include <stdio.h>

int main() {
       	FILE *fp;
	char buffer[100];
	
	fp = fopen("example.txt", "w");
	
	fprintf(fp, "Hey\n");

	fclose(fp);

	// Open a file for reading		         
	fp = fopen("example.txt", "r");

	if (fp == NULL) {
		printf("Error opening file!\n");
		return 1;
	}

	// Read and print a line from the file
	if (fgets(buffer, 100, fp) != NULL) {
		printf("Line from file: %s", buffer);
	}

	// Close the file
	fclose(fp);

	return 0;
}

