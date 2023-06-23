#include <stdio.h>
#include "main.h"

void
puts_half(char *str)
{
int n;
int c[1000];
int len = 0;

while (*str)
{
	len++;
}
n = (len - 1) / 2;

while (n < len)
{
	c[n]=str[n];
}
}	
