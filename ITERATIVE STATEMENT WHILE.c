/*ITERATIVE STATEMENT WHILE: The Most Simple and Important
Iterative statement.
*/
#include <stdio.h>

/*Semantics:
1. if expression is 0 (LOGICAL FALSE) the statement while is omitted.

*/
int main(){
	int i = 0;
	while(i<10)
	{
		printf("i = %d\n", i);
		i++; // you add this so you can exit the loop
	}
	return 0;
}