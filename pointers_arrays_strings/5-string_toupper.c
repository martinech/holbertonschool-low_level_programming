#include "main.h"

char
*string_toupper(char *s)
{
int l;

for (l = 0; s[l] != '\0'; l++)
	{
	if (97 <= s[l] && s[l] <= 122)
		 s[l] = s[l] - 32;
	}
return(0);
}

