#include <stdio.h>

#include "mytree.c"

int main()
{
	SearchTree S;
	Position P;
	int i;
	int j=0;
	
	S = MakeEmpty(NULL);

	for(i=3; i<77; i++)
	{
		S = Insert(i, S);
	}
	
	P = FindMax(S);
	if(P == NULL)
		printf("%s\n", "wrong");
	else
		printf("%d\n", P->Element);
	return 0;
}
