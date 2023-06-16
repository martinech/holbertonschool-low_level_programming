#include <stdio.h>
#include <string.h>
#include "main.h"

int
main(void)
{
char frase[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i <= 23; i++)
{
_putchar(frase[i]);
}
_putchar('\n');
return (0);
}
