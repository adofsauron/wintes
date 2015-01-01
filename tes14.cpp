#include <stdio.h>

char *fortes()
{
	static char s[] = "llmn";
	return s;
}

int main()
{
	char stk[] = "abcdef";
	char *str = stk;
	str++;
	*str = 'k';
	str--;
	printf("%s\n", stk);
	char *k = fortes();
	printf("%s\n", k);

	return 0;
}