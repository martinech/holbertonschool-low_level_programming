#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int
main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
	printf("%i is zero\n", n);
}
if (n < 0)
{
	printf("%i is negative\n", n);
}
if (n > 0)
{
	printf("%i is positive\n", n);
}
return (0);
}
