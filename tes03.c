#include <stdio.h>
#include <stdlib.h>

struct person
{
	char *name;
	int age;
	char *loca
};

struct person myPerson = {
	.name = "Jame",
	.age = 17,
	.loca = "earth",
};

int main()
{
	printf("%s\n", myPerson.loca);
	
	printf("%s\n", "hello" "world");
	
	int x;
	char *b="17";
	sscanf(b, "%d", &x);
	printf("%d\n", x);
	return 0;
}
