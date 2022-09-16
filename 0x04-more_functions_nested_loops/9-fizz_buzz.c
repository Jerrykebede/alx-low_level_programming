#include <stdio.h>

/**
 * main -program the prints either number
 * or fizz or buzz or fizzBuzz
 *
 *
 * Return: returns 0
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			print("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				print("Buzz ");
			}
			else
			{
				putchar('\n');
			}
		}
