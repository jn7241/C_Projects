#include <stdio.h>

/*If, Relations, and Flow of Control*/

int main()
{
	int speed;
	printf("\nEnter your speed (as an integer):");
	scanf("%d", &speed);
	if (speed < 65)
		printf("\nNo speeding ticket for you");
	else
		printf("\nSpeeding Ticket time!");
	return 0;
}

// SUM UP OF LESSON PROGRAM
/*
-if statement: when declared, checks whether statement written
in parantheses is true, otherwise doesn't do anything.
When statement is logical TRUE (1, not 0), it proceeds.
From there you can add a function.
-else statement: can be declared and run only when preceding 
if statements (or 1 if statement) is logical FALSE (0).
From there, it proceeds. From this statement you can also
add functions (like printf, scanf...)
- else if: similar to else, you don't need to declare
what the statement is refering to (if shows it when written first).
has higher precedence than else (is run before else).
-Relational operators: (<,>,=<,=>, =). Precedence is higher
than logical operators, but lower than Mathematical operators
(*+-/). This is just like normal arithmetic.

