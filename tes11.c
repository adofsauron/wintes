#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
	char  *name;
	int age;
	char *local;
};

void show(struct person *per)
{
	printf("name: %s, age: %d, local: %s\n", per->name, per->age, per->local);
}

int main()
{
	struct person myper[] =
	{
		{"Jame", 15, "none"},
		{"Lily", NULL}
	};

	char headStr[250] = "";
    strcat(headStr, "HTTP/1.1 200 OK\r\n");
    strcat(headStr, "Content-Type: application/x-javascript; charset=utf-8\r\n");
    strcat(headStr, "Connection: keep-alive\r\n");
    strcat(headStr, "X-XSS-Protection: 0\r\n");
    strcat(headStr, "\r\n");

	printf(headStr);

	
	return 0;
}