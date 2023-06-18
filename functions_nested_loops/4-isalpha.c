#include <stdio.h>
#include <string.h>
#include "main.h"

int
_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	else
		return (0);
	}
}
