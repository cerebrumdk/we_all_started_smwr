/* 
 * Merge-sort algorithm
 *
 * Well, actually only bubble sort and funny comments
 *
 * When all I knew about arrays is the fact that they are kind of like python lists, 
 * I tried to write this, after that try came a lot of studying, ahah 
 */

#include <stdio.h>

// I didn't know about arr degration to a pointer yet :)
//
// what will happen if I pass size in []?
// if I pass here 7, will be the last digit in an array of 6 be 0? I will do it for the sake of an experiment and then change to arr[], because size can change
void print_arrays(int size, int arr[]) 
{
	for(int i = 0; i < size; i++){
		printf("[%d],\t", arr[i]);
	}
}

void bubble_sort(int arr_size, int array[]) 
{
	
	// I actually don't remember how it's done in the example, either it's through dereferrencing or. Btw can we even derefference and array, how does it work with pointers?
	// Actually I need to return an array here, so that's a challenge! EDIT: Turns out I don't, lol.
	
	/* 
	 * As it turns out, it's better to explicitly write size of an array in [], when passing it as a parameter, 
	 * I find it WAY more concise and elegant. But, if a size can change, it's better to have two parameters
	 *
	 * But the thing is - size usually shouldn't change, even when we initialize an arr, we need to provide it wth constant value
	 * and not even const, sinceit doesn't make a value constant, but rather read-only, which is not sufficient for a compiler and will result in VLA
	 * (variable length array)
	 *
	 *
	 * More than that, I've learnt that arrays are actually passed down as pointers,
	 * more precisely - their initial type decays into a pointer,
	 * meaning that any array passed into a function will be changed!
	 *
	 * NOTE: I need to figure out how I should avoid it when I want to keep the original one!!!
	 *
	*/

	int temp = 0;
	
	for(int i = 0; i < arr_size; i++){
		for(int j = 1; j < (arr_size - 1); j++){
			if(array[j] < array[i]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}	
	}


}

int main()
{
	const int SIZE_1 = 6;
	const int SIZE_2 = 7; 

	int arr_1[SIZE_1] = {4, 2, 16, 5, 8, 11};
	int arr_2[SIZE_2] = {10, 3, 1, 15, 7, 6, 9};
	
	printf("\nArray 1: \n");
	// "? is it a problem in arr_1[SIZE_1]? in an example what he's passing is arr_1, but I have recieved an error Variable-sized object may not be initialized"
	print_arrays(SIZE_1, arr_1); // ANSWERED ??? Do we need to pass arguments' types here ???? NOTE: We don't
	printf("\nArray 2: \n");
	print_arrays(SIZE_2, arr_2);

	bubble_sort(SIZE_1, arr_1);
	bubble_sort(SIZE_2, arr_2);
	
        printf("\nArray 1: \n");
	print_arrays(SIZE_1, arr_1);
	printf("\nArray 2: \n");
	print_arrays(SIZE_2, arr_2);

	/* merge_sort(SIZE_1, SIZE_2, arr_1, arr_2);
	print_arrays(SIZE_1, arr_1);
	print_arrays(SIZE_2, arr_2);
	*/
	return 0;
}
