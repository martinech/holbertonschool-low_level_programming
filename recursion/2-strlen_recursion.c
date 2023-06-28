#include "main.h"

int
_strlen_recursion(char *s)
{
int n = 0;

	if (*s)
	{
		n++;
		_print_rev_recursion(s + 1);
	}
	return (n);
}
