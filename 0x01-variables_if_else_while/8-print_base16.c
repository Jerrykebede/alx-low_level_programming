#include <stdio.h>
/**
 * min-prints all the numbers of base 16 in lowercase, followed a new line.
 * Return: Always 0 (sucess)
 */
int main(void)
{
int ch;
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
