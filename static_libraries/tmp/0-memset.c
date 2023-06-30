#include "main.h"

char
*_memset(char *s, char b, unsigned int n)
{
unsigned int l;

for (l = 0; l < n; l++)
	s[l] = b;

return (s);
}
