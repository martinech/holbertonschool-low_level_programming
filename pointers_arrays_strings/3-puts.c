#include <stdio.h>
#include "main.h"

int
_puts(char *str)
{
int count;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
_putchar('\n');
return (0);			
}
