#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
struct AANode;
typedef struct AANode *Position;
typedef struct AANode *AATree;

Position NullNode;

struct AANode
{
	ElemType Elem;
	AATree Left;
	AATree Right;
	int level;	
};


AATree 
Init(void)
{
	if(NullNode==NULL)
	{
		NullNode = malloc (sizeof(struct AANode));
		
		NullNode->Left = NullNode->Right = NullNode;
		NullNode->level = 0;
	}	
	printf("init....\n");
	return NullNode;
}

AATree
Makefree(AATree T)
{
	if(T!=NullNode)
	{
		Makefree(T->Left);
		Makefree(T->Right);
		free(T);
	}
	printf("free...\n");
	return NullNode;
}

static Position
SingleRotateWithLeft(Position K2)
{
	Position K1;
	K1 = K2->Left;
	K2->Left = K1->Right;
	K1->Right = K2;
	
	return K1;
}

static Position
SingleRotateWithRight(Position K1)
{
	Position K2;
	K2 = K1->Right;
	K1->Right = K1->Left;
	K2->Right = K1;
	
	return K2;
}

AATree 
Skew(AATree T)
{
	if(T->Left->level == T->level)
	{
		T = SingleRotateWithLeft(T);
	}
	return T;
}

AATree
Split(AATree T)
{
	if(T->Right->level == T->level)
	{
		T = SingleRotateWithRight(T);
	}
	return T;
}

AATree 
Insert(ElemType Elem, AATree T)
{
	if(T == NullNode)
	{
		 T = malloc (sizeof(struct AANode));
		 T->Elem = Elem;
		 T->level = 1;
		 T->Left= T->Right = NullNode;
	}
	else
	if(Elem < T->Elem)
	{
		T->Left = Insert(Elem, T->Left);
	
	}
	else
	if(Elem > T->Elem)
	{
		T->Right = Insert(Elem, T->Right);
	
	}
	
	T = Skew(T);
	T = Split(T);
	
	return T;
}

void 
Retrieve(Position P)
{
	if(P==NullNode)
	{
		printf("NONE\n");
		return ;
	}
	printf("%d\n", P->Elem);
}

Position
Find(ElemType Elm, AATree T)
{
	if(T==NullNode)
		return NullNode;
	
	if(Elm < T->Elem)
		return Find(Elm, T->Left);
	else
	if(Elm > T->Elem)
		return Find(Elm, T->Right);
	else
		return T;		
}

Position
FindMin(AATree T)
{
	if(T==NullNode)
		return NullNode;
	else
	if(T->Left == NullNode)	
		return T;
	else
		return FindMin(T->Left);	
}

Position
FindMax(AATree T)
{
	
	if(T!=NullNode)
	{
		while(T->Right != NullNode)
			T = T->Right;
	}

	
	return T;
}

int main()
{
	AATree T;
	T = Init();
	int n;
	for(n=3; n<8; n++)
	{
		T = Insert(n, T);
	}

	Position P;
	P = FindMax(T);
	Retrieve(P);
	Makefree(T);
	printf("hey\n");
	return 0;
}
