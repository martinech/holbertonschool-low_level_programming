#include <stdio.h>
#include "main.h"

void
puts2(char *s)
{

int len = 0;

while (s[len] != '\0')
	len++;
while (len > 0)
	{
	len--;
	_putchar(s[2 * len]);
}

_putchar('\n');
}
