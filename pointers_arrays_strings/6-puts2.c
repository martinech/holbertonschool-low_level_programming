#include <stdio.h>
#include "main.h"

void
puts2(char *s)
{

int len = 0;
int c = 0;

while (s[len] != '\0')
	len++;
if (len % 2 == 0)
	while (c < len / 2)
	{
	_putchar(s[c * 2]);
	c++;
	}
else
	while (c <= len / 2)
	{
	_putchar(s[c * 2]);
	c++;
	}
_putchar('\n');
}
