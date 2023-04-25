/*Pointer Code Example
-> good if you want to understand the machine level
*/

#include <stdio.h>
#include <strings.h> //for memcpy to work 
int main(void)
{
	const int SIZE = 5;
	int grades[SIZE];
		memcpy(grades, 
		(int[]){78, 67, 92, 83, 88}, sizeof(grades));
		
	double sum = 0.0;
	double *ptr_to_sum = &sum;
	// in this case it means pointer to double
	// double can be any variable: like float, int	
	int i; 
	
	printf("\nClass grades are:\n");
	
	for (i=0; i < SIZE; i++)
		printf("%d\t", grades[i]);
	printf("\n\n");
	
	
	for (i = 0; i < SIZE; i++)
		sum = sum + grades [i];
	printf("Class average is %.2f\n\n", sum/SIZE);
	printf("\n\n");
	
	printf("sum is at %p, or %lu and is %lf\n",
ptr_to_sum, // HEX REFERENCE OF 5 SUM VALUE
ptr_to_sum, // 4 bit reference from pointer
*ptr_to_sum); //dereferenced pointer to sum -> sum of 5 grades
printf("grades are at %lu to %lu\n", grades, grades + 5);
}

/*
%p -> HEXADECIMAL VALUE
%lu -> longunsigned at least 4 bytes or 8 depending on
architecture. the longunsigned value is the address of 
the 5 sum value. the value is about 400. While 
the longunsigned address is very big.
0xHEXVALUE (anything after 0x is the hexadecimal value)
*/


/*Pointers will interpret bits on the address based on 
the type you reference. 
double *var is looking at double float.
when you call it as a %p you get the hexidecimal value 
of address. works when pointer is written as 
var.
%lu gives you the decimal value of address. works 
when the pointer is written var 
%lf gives you the actual value because you gave
the unreferenced pointer. So you aren't pointing 
to an address, but to a value.
Works when writting *var.

*/