#include <stdio.h>
#include "main.h"

void
_print_rev(char *s)
{

int len = _strlen(s);

while (*s > 0)
{
	_putchar(s[len]);
	len--;
}
_putchar('\n');
}
