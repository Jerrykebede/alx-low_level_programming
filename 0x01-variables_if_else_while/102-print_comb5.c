#include <stdio.h>
/**
 * main-prints all the numbers of base 16 in lowercase, followed by a new line.
 *  Return: Always 0 (sucess)
 */
int main(void)
{
int num1;
int num2;
for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
if (num1 == 98 && num2 == 99)
continue;
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
