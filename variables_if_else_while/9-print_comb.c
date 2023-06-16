#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int
main(void)
{
int ch;
while (ch < '9')
{
putchar(ch);
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
