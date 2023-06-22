#include <stdio.h>
#include "main.h"

int
_puts(char *str)
{
int count;

count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
_putchar('\n');
return (0);			
}
