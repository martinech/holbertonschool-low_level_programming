#include "main.h"


char
*_strncat(char *dest, char *src, int n)
{
	int dLen = 0;
	int sLen = 0;


	while (dest[dLen] != '\0')
	{
		dLen++;
	}


	while (sLen < n && src[sLen] != '\0')
	{
		dest[dLen] = src[sLen];
		dLen++;
		sLen++;
	}


	dest[dLen] = '\0';

	return (dest);
}
