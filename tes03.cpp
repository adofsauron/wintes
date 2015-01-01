#include <iostream>

int change(int &x)
{
	x++;
	return x;
}

int main()
{
	int a = 10;
	int &b = a;
	std::cout<<&a<<" "<<&b<<std::endl;

	int c = 20;
	b = c;

	

	change(a);

	std::cout<<a;

	return 0;
}