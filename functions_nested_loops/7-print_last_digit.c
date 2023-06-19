#include <stdio.h>
#include <string.h>
#include "main.h"

int
print_last_digit(int n)

{
	int p;

	if (n < 0)
	{
		p = (-1 * (n % 10));
			_putchar(p + '0');
	}
	else
	{
		p = (n % 10);
			_putchar(p + '0');
	}
	return (p);
}
