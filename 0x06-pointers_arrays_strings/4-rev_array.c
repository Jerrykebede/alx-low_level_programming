#include "main.h" 

/**
 * revers_array - function that revers content of array 
 * @a: array 
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp,index;
	for (index = n - l; index > n/ 2; index--)
	{
		tmp = a[n - l - index];
		a[n -l - index] = a[index];
		a[index] = tmp;
	}
}
