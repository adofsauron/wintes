#include <stdio.h>
#include <stdlib.h>

#include "mytree.h"

struct mytree
{
	ElementType Element;
	SearchTree Left;
	SearchTree Right;
};

SearchTree
MakeEmpty(SearchTree T)
{
	if(T != NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}
	
	return NULL;
}


SearchTree
Insert(ElementType X, SearchTree T)
{
	if(T ==  NULL)
	{
		T =  (SearchTree) malloc (sizeof(struct mytree));
		T->Element = X;
		T->Left =  T->Right = NULL;
	}
	else
	if(X < T->Element)
	{
		T->Left = Insert(X, T->Left);
	}
	else
	if(X > T->Element)
	{
		T->Right = Insert(X, T->Right);
	}	

	return T;
}

Position 
Find(ElementType X, SearchTree T)
{
	if(T == NULL)
		return NULL;
	
	if(X < T->Element)
		return Find(X, T->Left);	
	else
	if(X > T->Element)
		return Find(X, T->Right);	
	else
		return T;	
}

Position 
FindMin(SearchTree T)
{
	if(T == NULL)
		return NULL;
	if(T->Left == NULL)
		return T;
	else
		return FindMin(T->Left);	
}

Position
FindMax(SearchTree T)
{
	if(T == NULL)
		return NULL;
	if(T->Right == NULL)
		return T;
	else
		return FindMax(T->Right);		
}
