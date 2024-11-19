/*
 *  I figured it out later, but it was confusing at the beginning
 *  Anyway, keeping here for memories
 *
 * I don't understand how it works in author's video
 * const isn't really a constant, but simply a read-only, 
 * so why everyone tells to do it 
 * (the guy from yt and professor from coursera)? :/
 */


#include <stdio.h>
#include <stdlib.h>

const int ARRAY_LENGTH = 5;
// #define ARRAY_LENGTH 5 // works just fine with  macros

void print_array(int myarray[ARRAY_LENGTH]) 
{	
	for(int i = 0; i < ARRAY_LENGTH; i++){
		printf("%d", myarray[i]);
	}
	printf("\n");

}

int main()
{
	int a[ARRAY_LENGTH] = {1, 2, 3, 4, 5};
	int b[ARRAY_LENGTH] = {5, 4, 3, 2, 1};
	
	print_array(a);
	print_array(b);
}

