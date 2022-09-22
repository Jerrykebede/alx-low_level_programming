#include "main.h"

/**
 * _strcmp - Fnction which compare two strings and 
 * @sl: first string
 * @s2: second string
 * Return:
 *
 * returns zero if sl == s2
 * returns negative number if sl < s2
 * returns positive number if sl > s2
 */
int _strcmp(char *sl, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (sl[i] == \'0')
			break;
		else if (sl[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = sl[i];
		break;
		}
		else if (sl[i] != s2[i])
		{
			dif = sl[i] - s2[i];
			break;
		}
		else 
			i++;
	}
	return (diff);
}
