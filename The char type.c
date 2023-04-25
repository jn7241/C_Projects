#include <stdio.h>

int main(void){
	char c = 'a';
	printf("c in ASCII is %d\n", c); //ASCII characters have int values
	printf("c the charachter %c\n", c);
	printf("Three consecutive chars are: %c%c%c \n", c, c+1, c+2);	
	printf("Three bell ring chars are: %c%c%c \n", '\a', '\a', '\a');
	return 0;
}
