#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct MyPerson
{
	char *name;
	int age;
	void (*work)(void *str);
};

void say(void *str)
{

	char *s = (char *) str;

	printf("say: %s\n", s);
}

void speak(void *str)
{

	char *s = (char *) str;

	printf("speak: %s\n", s);
}


int main()
{
	struct MyPerson myperson;

	myperson.name = "Jame";
	myperson.age = 17;
	myperson.work = speak;

	myperson.work("fuck!!");


	char x[7] = "abcd";

	printf("%s\n", x);
	
	return 0;
}