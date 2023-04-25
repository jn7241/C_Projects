/*RECURSION-FACTORIAL CODE
RECURSIVE VS ITERATIVE FACTORIAL n!
*/
#include <stdio.h>
/*long int allows factorials to go up
to 20. Long factorials after !20 
will be incorrect due to a concept 
called integer overflow
(A processor can only process so much)
WARNING: AT FACTORIAL 17 CODE BEGINS TO BECOME INNACURATE (GIVES NEGATIVE INTEGER).

*/
long int factorial (int n)
{
	long f = 1; //long is long int
	int i;
	for (i=1; i <= n; i++)
		f = f * i; 
		return f;
}

long int recursive_factorial (int n)
{
	if (n==1)
		return 1; // !1 = 1. 
	else
		return(recursive_factorial(n-1) * n); 
		//if n = 20: 19*20, up to 1 * 2, then n == 1 so returns 1 
	}

int main(void)
{
	
int how_many = 0, i;

printf("I want table of factorial up to n:");
scanf("%d", &how_many);

printf("\niterative factorials: \n");

for (i=1; i <= how_many; i++)
	printf("\n%d\t %ld\n", i, factorial(i)); //iterative factorial
	
printf("\nrecursive factorials \n");

for (i=1; i<= how_many; i++)
	printf("\n%d\t %ld\n", i, recursive_factorial(i));
printf("\n\n");
return 0;
};

/*This code is written with call-by-value taken in mind:
Recursive/iterative factorial both have a parameter which is differently named than the name of the value in main.
recursive_factorial(i), will be considered recursive factorial (int n) 
*/