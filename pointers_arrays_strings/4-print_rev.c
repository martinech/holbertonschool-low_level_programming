#include <stdio.h>
#include "main.h"

void
_print_rev(char *s)
{

int len = 0;


while (s[len] != '0')
	len++;
while (len > 0)
{
	_putchar(s[len]);
	len--;
}

_putchar('\n');
}