#include <stdio.h>
#include <math.h>
#define PI 3.142857

int main () {
   double i, radians_value, sine_of;
   for (i = 0 ; i <= 180; i++) //where i represents a degree value from 0-180
   {
   	radians_value = i * PI / 180; //turning value into radians because sin() takes radians only
   	sine_of = sin(radians_value);  
   	 printf("The sine of %lf degrees is %lf.\n", i, fabs(sine_of)) ; //180 is calculated as negative: corrected with fabs() 
   }

   return(0);
   
}

/*Why didn't I calculate all the way to 360 degrees? Any sine over 180 degrees (up to 360) is mathematically a negative value*/