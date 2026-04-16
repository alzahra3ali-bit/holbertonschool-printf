#include <unistd.h>

/**
 * print_int - prints an integer
 * @n: integer to print
 * Return: number of printed digits
 */

int print_Int(int n)
{
	int count = 0;
	char c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		count++;
	}

	if (n / 10)
		count += print_int(n / 10);

	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;

	return (count);
}
