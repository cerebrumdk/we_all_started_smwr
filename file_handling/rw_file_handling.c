/*
 * Simplest file handling
 */

#include<stdio.h>
// #include<conio.h>

int main()
{
	FILE *fp;
	char ch[30];
	fp = fopen("hello.txt", "w");
	printf("Enter data: ");
	while(fgets(ch, sizeof(ch), stdin) != NULL) {
		 fputs(ch, fp);
	}

	fclose(fp);
	
	fp = fopen("hello.txt", "r");
	
	printf("read\n");
	while(fgets(ch, sizeof(ch), stdin) != NULL){
		fgets(ch, 30, fp);
	}
	fclose(fp);
	
	printf("%s\n", ch);

	return 0;	
}

