#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>


using namespace std;

struct infla
{
	char name[20];
	float volume;
	double price;
};


enum bits{one=3, two=3, three};
bits a;

int main()
{
	

	infla guest[2] = 
	{
		{"Jame", 0.5, 21.99},
		{"God", 0.7, 33.45}
	};

	
	a = bits(2);

	//cout<<&a;

	
	


	ofstream iout;
	iout.open("tmp.txt");
;	if(iout.is_open())
	{
		cout<<"opend.\n";
	}

	double xp=33;
	iout<<xp;
	iout.close();

	return 0;
}