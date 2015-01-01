#include <iostream>

namespace a
{
	int counts;
}


struct person
{
	char *name;
	int age;
	person()
	{
		name = "tom";
		age = 17;
	}
};

int main()
{
	a::counts=3;

	person one;
	std::cout<<one.name;
};