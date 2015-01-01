#include <stdio.h>
#include <stdlib.h>

struct arqee
{
	int line[3];
} MyAr;

void insert(void)
{

	int i;

	printf("put: \n");
	for(i=0; i<3; i++)
	{
		scanf("&d", MyAr.line[i]);
	}
}

int isArq(int a, int b, int c)
{
	int flags = 0;
	if((a+b>c) || (b+c>a) || (a+c>b))
		flags = 1;
	else
		flags = -1;
		
	return flags;		
}

void execu()
{
	int flags = isArq(MyAr.line[0], MyAr.line[1], MyAr.line[2]);
	if(flags)
	{
		printf("It is arq.\n");
	}
	else 
	{
		printf("this is not a arq!!!");	
	}
	
	printf("%d\n", flags);
}

int main()
{
	insert();
	
	execu();
	return 0;
}
