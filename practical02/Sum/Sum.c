#include <stdio.h>


int main(void) {

               /* Declare variables */
                int i;
                float sum1, sum2, diff;


               /* We create a for loop for the first sum */
                sum1 = 0.0;
	            for (i=1; i<=1000; i++) {
	                                     sum1 = sum1 + 1.0/i;
	                                     }


		/* We create a for lopp for the second sum */
		 sum2 = 0.0;
		    for (i=1000; i>0; i--) {
			   		    sum2 = sum2 + 1.0/i;
			                   }

                 /* We print sum1 and sum2 */
	         printf(" Sum1=%f\n",sum1);
		 printf(" Sum2=%f\n",sum2);

	         /* We calcul the difference between sum1 and sum2 and we ask to print the result */
	         diff = sum2 - sum1;

		 printf(" Difference between the two is %f\n",diff);

}

