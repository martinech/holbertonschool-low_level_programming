#include "main.h"

int
_strlen_recursion(char *s)
{
int n;

	if (*s)
	{
		n++;
		_strlen_recursion(s + 1);
	}
	return (n);
}
