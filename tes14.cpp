#include <stdio.h>

int main()
{
	char stk[] = "abcdef";
	char *str = stk;
	str++;
	*str = 'k';
	str--;
	printf("%s\n", str);
	return 0;
}