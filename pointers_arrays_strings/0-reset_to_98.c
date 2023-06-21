#include <stdio.h>
#include "main.h"

void
reset_to_98(int *n);
{

int n;
int *p;

n = 33;
p = %n;

printf("Value of 'n': %d\n", n);
printf("Adress of 'n' : %p\n", &n);
prinft("Value of 'p' : %p\n", p);
*p = 98;
printf("Value of 'n' : %d\n", n);
return (0);
}
