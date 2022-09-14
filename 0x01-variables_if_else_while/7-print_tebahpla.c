#include <stdio.h>

/**
 * main -> prints the alphabet in lowercase, followed by a new line.
 *  Return: Always 0 (sucess)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);
return (0);
}
