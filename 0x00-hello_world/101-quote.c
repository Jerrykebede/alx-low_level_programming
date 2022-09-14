#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
/**
 * main -prints exactly and that piece of art is useful"
 * - Dora Korpar, 2015-10-19 .
 *   followed by a new line, to the standard error.
 *   Return: Always 0 (success)
 */
int main(void)
{
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str1, 59);
return (1);
