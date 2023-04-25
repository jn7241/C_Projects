/*SWITCH STATEMENT OPERATOR IS USED:
FOR FLOW OF CONTROL WHEN CASES ARE ENUMERATED
CAN DO THIS WITH FOR/WHILE AND IF/ELSE IF.\

THE LABELS ON INTEGERS CAN ONLY BE:
INTEGER TYPES (char, int, long).
The labels of integers are case (integer value):
*/

#include <stdio.h>

int main(void){
	int i, a;
	printf("ENTER EITHER 1 OR 2!\n");
	scanf ("%d", &i);
	switch (i){ 

	case 1: a = 2*i; break; //break jumps to other function
	case 2: a = 3*i; break;
	default: break; // default happens when other values are put
	}
	printf("\n\n\n%d", a);
	return 0;
}