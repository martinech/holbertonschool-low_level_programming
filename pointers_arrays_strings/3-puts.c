#include <stdio.h>
#include "main.h"

int
_puts(char *str)
{
int count;

count = 0;

	while (str[count] != '\0')
	{
		_puts(str[count]);
	}
_puts('\n');
return (0);			
}
