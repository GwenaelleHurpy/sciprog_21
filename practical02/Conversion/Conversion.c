#include <stdio.h>
#include <math.h>

int main(void) {

               /* We declare all the  variables */
               int i,inum,tmp,numdigits;
               float fnum;
               char binnum[60];

               /* We intialise 4-byte integer variable */
               inum = 42;

               /* We convert integer variable to 4-byte float */
               fnum = (float) inum;


               /* We use a loop to convert to binary number (string)*/
               i = 0; tmp = inum;
	       while (tmp > 0) {
	                        sprintf(&binnum[i],"%1d",tmp%2);
	                        tmp = tmp/2;
	                        i++;
	                       }   

              /* We terminate the string */
               binnum[i] = '\0';


              /* We ask to print the results */
              numdigits = ceil( logf(fnum)/logf(2) );
              printf("The number of digits is %d\n",numdigits);


              printf("inum=%d,  fnum=%f, inum in binary=%s\n",
              inum,fnum,binnum);

}    



