#include "main.h"
#include <string.h>
/**
* _strcmp -> this a function for comparing purpose
* @s1 : first parameter
* @s2 : second parameter
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
int r;

for (r = 0; s1[r] != '\0' || s2[r] != '\0'; r++)
{
	if (s1[r] != s2[r])
		return (s1[r] - s2[r]);

}
return (0);
}
