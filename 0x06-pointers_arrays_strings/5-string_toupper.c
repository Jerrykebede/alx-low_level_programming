#include "main.h"

/**
 * string_touper -> converting any string to upper case
 * @x: string param
 * Return: string
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i++])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] - 32;
		i++;
	}
	return (x);
}
