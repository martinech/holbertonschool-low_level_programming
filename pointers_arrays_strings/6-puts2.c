#include <stdio.h>
#include "main.h"

void
rev_string(char *s)
{

int len = 0;
int c = 0;

while (s[len] != '\0')
	len++;
while (c < len)
	{
	_putchar(s[c * 2]);
	len++
}
_putchar('\n');
}
