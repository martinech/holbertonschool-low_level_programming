#include "main.h"

char
*string_toupper(char *s)
{
int l;

	for (l = 0; s[l] != '\0'; l++)
		{
		if ('a' <= s[l] && s[l] <= 'z')
			s[l] = s[l] - 32;
		}
return (s);
}

