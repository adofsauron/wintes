#include <stdio.h>
#include <stdlib.h>

#define NONE -1      //不是三角形 
#define NORMAL_ARQ 1 //普通三角形 
#define ZHIJIAO_ARQ 2  //直角三角形 
#define DENGYAO_ARQ 3 //等腰三角形（三边不等） 
#define DENGBIAN_ARQ 4 //等边三角形 

struct arqee
{
	int line[3];
} MyAr;

void insert(void)
{

	int i;

	printf("请输入三个整数: \n");
	for(i=0; i<3; i++)
	{
		scanf("%d", &MyAr.line[i]);
	}
}

int isArq(int a, int b, int c)
{
	int flags = 0;
	if((a+b>c) && (b+c>a) && (a+c>b))
	{
		
		if((a==b) || (b==c) || (a==c))
		{
			if(a==b&&b==c)
			{
				flags = DENGBIAN_ARQ;
			}
			else
			{
				flags = DENGYAO_ARQ;
			}
		}
		else if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (a*a+c*c==b*b))
		{
			flags = ZHIJIAO_ARQ;
		}
		else
		{
			flags = NORMAL_ARQ;
		}
	}
	else
	{
		flags = NONE;  //不是三角形 
	}
		
	return flags;		
}

void show(struct arqee *myArq)
{
	int i;
	for(i=0; i<3; i++)
	{
		printf("%d\t",myArq->line[i]);
	}
	
	printf("\n");
}

void execu()
{
	int flags = isArq(MyAr.line[0], MyAr.line[1], MyAr.line[2]);
	switch(flags)
	{
		case NORMAL_ARQ:
		{
				printf("普通三角形\n");
				break;
		}
		case ZHIJIAO_ARQ:
		{
				printf("直角三角形\n");
				break;
		}
		case DENGBIAN_ARQ:
		{
				printf("等边三角形\n");
				break;
		}
		case DENGYAO_ARQ:
		{
				printf("等腰三角形\n");
				break;
		}
		case NONE: 
		{
				printf("不是三角形\n");
				break;
		}
	}
	printf("------------------------------\n");
}

int main()
{
	while(1)
	{
		insert();
		show(&MyAr);
		execu();
	}
	return 0;
}

