#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	char *c;
	int sum = 0;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c > '9' || *c < '0')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
