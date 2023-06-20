#include "main.h"

void
print_triangle(int size)
{
	int linea = 0;
	int space, hashtag;

	if (size > 0)
	{
		while (linea < size)
		{
			for (space = size - 1; space > linea; space--)
			{
				_putchar(' ');
			}
			for (hashtag = 0; hashtag < linea + 1; hashtag++)
			{
				_putchar('#');
			}
			_putchar('\n');
			linea++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
