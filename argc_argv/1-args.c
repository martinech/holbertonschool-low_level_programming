#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc);
	return (0);
}
