#include <stdio.h>
#include "main.h"

void
rev_string(char *s)
{

int len = 0;
int c[1000];

while (s[len] != '\0')
{
	len++;
}

for (len; len > 0; len--)
{
	c[len]=s[len];
}
return(c);
}
