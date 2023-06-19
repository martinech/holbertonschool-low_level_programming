#include <stdio.h>
#include "main.h"

void
print_to_98(int x)
{
	if (x < 98)
	{
		while (x < 98)
		{
			printf("%d, ", x);
			x++;
		}
	}
	else if (x > 98)
	{
		while (x > 98)
		{
			printf("%d, ", x);
			x--;
		}
	}
	printf("98\n");
}
