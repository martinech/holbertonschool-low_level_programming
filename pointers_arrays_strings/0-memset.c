#include "main.h"

char
*_memset(char *s, char b, unsigned int n)
{
int l;

while (s[l] != '\0')
	l++;

for (l = 0; l <= n; l++)
	s[l] = b;

return (s);
}
