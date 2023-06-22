#include <stdio.h>
#include "main.h"

int
_puts(char *s)
{
int count;

count = 0;

	while (s[count] != '\0')
	{
		_puts(s[count]);
	}
_puts('\n');
return (0);			
}
