#include "main.h"
#include <string.h>
/**
* _strncpy -> this a function for copying purpose
* @dest : first parameter
* @src : second parameter
* @n : 3rd parameter
* Return: a string
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
