#include "main.h"

void
_print_rev_recursion(char *s)
{
int n = 0;

	if (*s)
	{
		_print_rev_recursion(s + 1);
		n++;
	}
}
