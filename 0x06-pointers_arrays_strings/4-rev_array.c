#include "main.h"
#include <string.h>
/**
* reverse_array -> this a function for reversing an arry
* @a : array a
*@n :  an element of an array
* Return: integer
*/
void reverse_array(int *a, int n)
{
int x, y;
for (x = 0; x < (n / 2); x++)
{
y = a[x];
a[x] = a[n - x - 1];
a[n - x - 1] = y;
}
}
