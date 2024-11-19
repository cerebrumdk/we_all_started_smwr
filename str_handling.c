/*
 * Getting my hands on strings))
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "Hey";
	char str2[20] = "Pal";
	char small_destination[2] = "0";

	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int compare = 0;

	char *literal_pointer = "pointer";
	char *ptr1 = NULL;

	printf("len1: %d\nlen2: %d\n", len1, len2);
	printf("str1: %s\nstr2: %s\n", str1, str2);	
	
	// compare = str1[i] - str2[i]
	compare = strcmp(str1, str2);
	printf("compare str1 to str2: %d\n", compare); // -8

	// strcat(small_destination, str1);
	// printf("small_destination: %s\n", small_destination); // UB
	strcat(str1, str2);
	printf("str1_concatenated: %s\n", str1);
	
	// not part of the standart anymore
	// strrev(str1);
	// printf("str1 reversed: %s\n", str1);
	// strlwr(str1);
	// printf("str1 to lower case: %s\n", str1);
	
	// Segmentation fault (core dumped)
	// *literal_pointer = 'T'; 
	// printf("literal_pointer[0]: %c;\n", literal_pointer[0]);

	ptr1 = str1;
	printf("ptr1[0]: %c, str1[0]: %c;\n", ptr1[0], str1[0]);
	ptr1[0] = 'D';
	printf("str1[0] changed: %c;\n", str1[0]);	
	*ptr1 = 'R';
	printf("*str1 changed again: %c\n", *str1);
	str1[0] = 'F';
	printf("Third change *str1: %c\n", *str1);

	return 0;
}
