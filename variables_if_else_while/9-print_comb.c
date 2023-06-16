#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int
main(void)
{
int ch;
for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
