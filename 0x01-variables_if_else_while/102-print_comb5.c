#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num1 = 0, num2;
	
	while(num1 <= 99)
	{
		num2 = num1;
		while(num2 <= 99)
		{
			if (num2 != num1)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((umn2 / 10) + 48);
				putchar((num1 % 10) + 48);

				if (num1 != 98 || num2 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');
	return 0;
}
