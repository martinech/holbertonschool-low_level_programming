#include <stdio.h>
#include <string.h>
#include "main.h"

void
times_table(void)
{
	int x, y, first, second;
	int counter = '0';

	for (counter = 0; counter <= 9; counter++)
	{
		for (x = 0; x <= 9; x++)
		{
			y = x * counter;
			first = (y / 10 + '0');
			second = (y % 10 + '0');

			if (y >= 10)
			{
				_putchar(first);
				_putchar(second);
			}
			else if (x != 0)
			{
				_putchar(' ');
				_putchar(y + '0');
			}
			else
			{
				_putchar(y + '0');
			}
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
