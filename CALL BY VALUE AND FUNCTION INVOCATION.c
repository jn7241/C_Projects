/*Code invocation local parameter vs global parameter.
CALL-BY-VALUE CONCEPT
*/
#include <stdio.h>
extern int extern_example = 0;
/*extern says that this declaration is defined 
throughout the code. 
Works without it since it's outside any function.
will give warning, irrelevant in this case since it's an example only
*/ 
int foobar(int n){ //replace n with k for same value
	n = n+1;
	return n;
}

int main(void){
	int k = 6;
printf("foobar(k)=%d, k = %d\n", foobar(k),k);
}

/*WHATS HAPPENING?
k is a parameter in itself. 
when put in func(int n) k doesn't change, 
but is assigned to a local parameter of itself.
(in this case n, but could have been k.)
that local parameter is returned as a value here.
The normal parameter is unaffected.
*/
