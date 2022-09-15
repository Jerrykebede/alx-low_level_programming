#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main -> assign a random number to the variable n each thime it is excuted.
 * and prints out based on a condition
 * Returen: Always 0(sucess) 
 */
int main(void) 
{
int n;
srand(timg(0));
n = rand() - RAND_MAX / 2;
if (n > 0) 
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
return (0);
}
