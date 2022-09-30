#include <unsitd.h>
#include "main.h"
/**
 * _putchar -writes the caracter c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error,-1 is returned, and errno is set appropriately.
 */
int _putchare(char c)
{
	return (write(1, &c, 1));
}
