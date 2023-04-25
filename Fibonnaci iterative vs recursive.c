/*RECURSIVE VS ITERATIVE FIBBONACI*/
/*F(n)=F(n-1) + F(n-2) ... + F(0) = 0.*/
#include <stdio.h>
// it works fast up to 45 but slows down due to large values
// when you have over a billion function calls it slows down

long fibonacci(int n)
{
	long f2 = 0, f1 = 1, f_old;
	int i;
	
	for (i = 0; i < n; i++ )
	{
		f_old = f2;
		f2 = f2 + f1;
		f1 = f_old;
	};
	return f2;
}

long recursive_fibonacci(int n)
{
	if( n <= 1 )
		return n;
	else 
		return(recursive_fibonacci(n-1) + recursive_fibonacci(n-2));
//specificially these calls will take more processing power
}

int main(void) 
{
	int how_many = 0, i;
	printf("I want table of fibonnaci up to n: ");
	scanf("%d", &how_many);
	printf("\n fibonacci\n");
	
	for (i=0 ; i < how_many; i ++)
		printf("\n%d\t iterative: %ld recursive: %ld\n", i, fibonacci(i), recursive_fibonacci(i));
	
}