#include <stdio.h>
/**
 * main -> prints the alphabet in lowercase, followed by a new line.
 *  Return: Always 0 (sucess)
 **/
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
