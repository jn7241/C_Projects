/* 
Marathon from miles and yards to kilometers
*/

#include <stdio.h>

int main(void)
{
	int miles, yards, x;
	double km;
	printf("Please give the value of miles/yards");
	printf("\nMiles: ");
	scanf("%d", &miles);
	printf("\nYards: ");
	scanf("%d", &yards);
	km = 1.609 * (miles + yards/1760.0);
	printf("\nA marathon is %lf kilometers", km);
	return 0;
	}
	                   


/*
if you don't want 0 as a result, 
make the divider a floating point
by adding a .0 after the number
*/