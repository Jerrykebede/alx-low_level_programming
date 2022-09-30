#include "main.h"
#include <stdio.h>

/**
*_isupper - function to checks if  character is uppercase 
* @c: checks input of function
*
* Return: returns  1 if 'c' is uppercase
* otherwise alwoys 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
