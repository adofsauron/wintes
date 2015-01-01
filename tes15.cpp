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
	char str[] = "a b ,cd,e f, ";
	trim(str);
	char* s = str;
	char* p;
	while(p = split(s, ','))
	{
		printf("%s\t", p);
	}
	return 0;
}
