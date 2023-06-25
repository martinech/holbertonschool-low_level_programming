#include "main.h"


char
*_strncpy(char *dest, char *src, int n)
{
	int dLen = 0;


	while (dLen < n && src[dLen] != '\0')
	{
		dest[dLen] = src[dLen];
		dLen++;
	}


	while (dLen < n)
	{
		dest[dLen] = '\0';
		dLen++;
	}


	return (dest);
}
