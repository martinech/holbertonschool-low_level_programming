#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int
main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
{
	printf("Last digit of %i and is greater than 5\n", lastDigit);
}
if (lastDigit == 0)
{
	printf("Last digit of %i and is 0\n", lastDigit);
}
if (0 < lastDigit < 6)
{
	printf("Last digit of %i and is less than 6 and not 0\n", lastDigit);
}
return (0);
}
