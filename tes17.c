#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s = "77,7,4,wordls";
	int x = atoi(s);

	printf("%d\n", strlen("hello\0world"));
	return 0;
}