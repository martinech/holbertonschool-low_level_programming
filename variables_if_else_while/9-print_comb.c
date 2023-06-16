#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int
main(void)
{
int ch1;
int ch2;
for (ch1 = '0' ; ch1 <= '9' ; ch1++)
{
	for (ch2 = '0' ; ch2 <= '9' ; ch2++)
	{
	putchar (ch1);
	putchar (", ");
	putchar (ch2);
	}
}
putchar('\n');
return (0);
}
