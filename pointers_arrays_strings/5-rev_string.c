#include <stdio.h>
#include "main.h"

void
rev_string(char *s)
{

int len = 0;
int c;


while (s[len] != '\0')
	len++;
while (len > 0)
	{
	len--;
	c[len]=s[len];
}
return(c);
}