#include <stdio.h> 
/*
Conversion from fahrenheit to celsius
Only integer results
*/
int main(void)
{
	int fahrenheit, celsius;
	printf("please enter fahrenheit value\n");
	scanf("%d", &fahrenheit); //scanf functions like input() in python. %d is the format specifier, used to get integer values, & shove the result of scanf in the fahrenheit variable
	celsius = (fahrenheit - 32)/1.8; //note conversion (function is going to be done as a double (float) then converts into integer -> silent conversin
	printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
	return 0;
}