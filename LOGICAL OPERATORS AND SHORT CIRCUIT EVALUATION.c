#include <stdio.h>
/*
Sally Coder
logical operators and short circuit evaluation
*/

int main(){
	int outside, weather;
	printf("If outside, enter 1. If not, enter 0.\n ");
	scanf("%d", &outside ); //IF ENTERED 0, ITS ALREADY FALSE
	// WE CALL THIS PHENOMENON SHORT CIRCUIT EVALUATION (DONE TO SAVE RESOURCES)
	printf("\nIf it's raining, enter 1. Otherwise enter 0.\n");
	scanf("%d", &weather);
	if (outside && weather) //AND OPERATOR IS &&
		printf("\n Please use an umbrella.\n");
	else 
		printf("\nYou can dress normally.\n");
	return 0;
}

/*THE PRECEDENCE OF LOGICAL OPERATORS (TRUTH TABLE AND) IS VERY LOW:
IT ACTUALLY GETS EVALUATED BY THE COMPUTERS AFTER NORMAL MATHEMATICAL
OPERATORS. 
*/

/* EXAMPLE: 
 (a < 3)  &&  ( a> 5):
 THIS WILL GIVE YOU 0 BECAUSE IF a<3 IS TRUE, THEN 
 a>5 isn't. A COMPUTER WILL ALWAYS EVALUATE MATH OPERATORS
 FIRST. SO THIS IS NOT POSSIBLE.
 */