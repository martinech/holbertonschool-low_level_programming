#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int
main(void)
{
char ch;
for (ch = '0' ; ch <= '9' ; ch++)
{
	putchar(ch);
	if (ch == '0')
	{
		break;
	}
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
