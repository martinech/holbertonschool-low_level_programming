#include <stdio.h>
#include "main.h"

int
_strlen(char *s)
{
int count;

count = 0;

	while (s[count] != '\0')
		count++;

return(count);
}
