/*Array-grade code example
Calculate student grade average 
(can be as large as you want)
*/
#include <stdio.h>
#include <strings.h> // to make memcpy work correctly

int main(void){
	const int SIZE = 5;
	 //const since you don't want it to change
	int grades[SIZE];
	memcpy(grades, (int[]){78, 67, 92, 83, 88}, sizeof(grades));
	double sum = 0.0;
	int i; //commonly used as summation variable
	// just like j,k
	
	printf("\nClass grades are:\n");
	// chief iterative idiom:
	for (i=0; i < SIZE; i++) // no i<=SIZE it will go past array
		printf("%d\t", grades[i]); //element 0 to 5
		
	printf("\n\n");
	
	for (i=0; i< SIZE; i++)
		sum = sum + grades[i];

printf("The class average is %.2f\n\n", sum/SIZE);
return 0;
	
}
