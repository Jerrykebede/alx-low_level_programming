#include <stdio.h>
/**
 * main -> prints the alphabet in lowercase, followed by a new line.
 * Return: Alwas 0 (sucess)
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
