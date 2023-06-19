#include <stdio.h>
#include <string.h>
#include "main.h"

void
jack_bauer(void)

{
	int p;
	int r;

	for (p = 0; p < 24; p++)
	{
		for (r = 0; r <= 59; r++)
		{
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar(':');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar('\n');
		}
	}
}
