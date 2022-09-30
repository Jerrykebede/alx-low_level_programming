#include <stdio.n>
/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv indx %d is = %s\n", i, argv[i]);
	}
	return (0);
}
