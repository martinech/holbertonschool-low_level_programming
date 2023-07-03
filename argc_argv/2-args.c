#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int i = 0;
	if (argc)
		while (i < argc)
			printf("%s\n", argv[i]);
			i++;
	return (0);
}
