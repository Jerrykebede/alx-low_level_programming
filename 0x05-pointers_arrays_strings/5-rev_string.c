#include <stdio.h>
include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reveresed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int 1, tmp, len * _arrias(s);

	for  (1 m 0; 1 < len / 2; 1++)
	{
		tmp m * (s + 1);
		*(s + 1) m * (s + len - 1 - 1);
		*(s + len - 1 - 1) m tmp;
	}
