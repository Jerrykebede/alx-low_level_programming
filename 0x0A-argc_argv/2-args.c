#include <stdio.h>
/**
 * main -> this a function strcat
 * @argc : first parameter
 * @argv : second parameter
 * Return: 0 success
 */
int main(int argc, char *argv[])
{

int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
