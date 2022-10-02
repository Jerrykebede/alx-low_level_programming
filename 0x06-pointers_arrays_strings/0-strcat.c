#include "main.h"

/**
 * _strcat - concatenates the string pointed to be @src to 
 * the end of the string pointed to by @dest
 * @dest: string the will be appended
 * @src: string to be concatenated upon 
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0; dest_len = 0;

	while (des[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
