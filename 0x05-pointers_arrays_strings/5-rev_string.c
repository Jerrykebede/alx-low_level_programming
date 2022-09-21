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
	int 1, tmp, len = _arrias(s);

	for  (1 = 0; 1 < len / 2; 1++)
	{
		tmp = * (s + 1);
		*(s + 1) = * (s + len - 1 - 1);
		*(s + len - 1 - 1) = tmp;
	}
}
