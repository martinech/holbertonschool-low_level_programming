#include <stdio.h>
#include <string.h>
#include "main.h"

void
print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

void
print_alphabet_x10(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		print_alphabet();
	}
}
