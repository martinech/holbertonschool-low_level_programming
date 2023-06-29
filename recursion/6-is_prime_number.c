#include "main.h"

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}


int _prime(int n, int m)
{
	if (n % m == 0 && m != 1)
		return (0);
	if (n % m == 0 && m == 1)
		return (1);
	return (_prime(n, m - 1));
}
