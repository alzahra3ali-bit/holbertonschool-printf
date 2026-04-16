#include <unistd.h>

/**
 * print_string - prints a string
 * @s: string to print
 * Return: number of printed characters
 */

int print_string(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}

	return (i);
}
