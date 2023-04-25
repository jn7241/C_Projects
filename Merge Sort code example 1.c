#include <stdio.h>
#include <string.h> //mecpy

/*
Bubble sort algorithm was n^2
Merge sort algorithm is nlogn, which 
sorts by default faster (logarithmic scale vs power scale)
*/

void print_array(int how_many, int data[], char *str)
{
	int i;
	printf("%s", str);
	
	for (i = 0; i< how_many; i++)
		printf("%d\t", data[i]);
}
/*simplified: pile a and b have same no. of elements,
elements are power of 2.
Reason: easier to understand/implement (when learning it)
*/
void merge (int a[], int b[], int c[], 
int how_many()) //a and b are the same size.
{
	int i = 0, j = 0, k = 0;
	
	while (i< how_many && j < how_many)
		if (a[i] < b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	while (i<how_many)
		c[k++]=a[i++];
	while (j<how_many)
		c[k++] = b [j++];

}

int main(void)

{
	const int SIZE = 5; 
	int a[SIZE],b[SIZE],c[2*SIZE]; //sorts only power of 2 vars
	memcpy(a, 
		(int[]){67, 82, 83, 88, 99}, sizeof(a));
	memcpy(b, (int[]){58,69,72,81,88}, sizeof(b));
	
	print_array(SIZE, a, "My grades this year\n");
	printf("\n\n");
	print_array(SIZE, b, "My grades last year\n");
	printf("\n\n");
	
	merge(a,b,c, SIZE); //calls merge function stated above
	print_array(2 * SIZE, c, "My sorted grades\n");
	printf("\n\n");
	return 0;
	}
	
	//RESULT: CODE WORKS WITH WARNINGS.
	




