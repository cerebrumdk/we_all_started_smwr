#include <stdio.h>

int main() {

	FILE *fp = fopen("output.txt", "w");
	if (fp == NULL) {
		printf("Error opening file!\n");
		return 1;
	}

	char ch = 'A';
    	fputc(ch, fp);  // Writes 'A' to the file using fputc()

    	fclose(fp);
	return 0;
}

