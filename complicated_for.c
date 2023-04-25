// More complicated use of for statement

#include <stdio.h>

int main(void){
	int blanks = 0, digits = 0, total_chars = 0;
	int c;
	for (; (c = getchar()) != EOF; total_chars++) //no initialization for this: because characters already initialized
	// termination ends at EOF
	{
		if (c==' ')
			++blanks;
		else if (c >='0' && c <= '9')
			++digits;
	};
	printf("\nblanks = %d, digits = %d, total character count = %d", blanks, digits, total_chars);
	return 0;
	
	
}