#include <stdio.h>
#include "main.h"

int
_strlen(char *s)
{
int count;

count = 0;

	while (s[count] != '\0')
	{
		_putchar(s[count]);
	}
_putchar('\n');
			
}
