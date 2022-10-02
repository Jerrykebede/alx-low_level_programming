#include "main.h"
#include <stdio.h>

/**
*_isupper - function to checks if character is uppercase 
* @c: checks input of function
*
* Return: returns  1 if 'c' is uppercase
* otherwise alwoys 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
