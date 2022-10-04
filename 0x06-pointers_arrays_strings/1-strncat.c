#include "main.h"
#include <string.h>
/**
* _strncat -> this a function to append some char
* @dest : first parameter
* @src : second parameter
* @n : 3rd parameter
* Return: a string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
