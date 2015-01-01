#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *split(char* &str, char del)
{
	if(!strchr(str, del))
		return NULL;
	char *ptr = str;	
	char *b = strchr(str, del);
	*b = '\0';
	str = b + 1;	
	return ptr;
}

void trim(char* str)
{
	char *p = str;
	while(*p)
	{
		if(*p != ' ')
			*str++ = *p;
		p++;	
	}
	*str = '\0';
}

int main()
{
	char str[] = "int:, int: , char:3:, float:4:, double:,";
	trim(str);
	char* s = str;
	char* p;
	char *t;
	while(p = split(s, ','))
	{
		while(t = split(p,':'))
			printf("%s\t", t);

		printf("\n");
	}
	return 0;
}
