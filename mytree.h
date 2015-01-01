typedef int ElementType;

#ifndef  mytree_h 
#define  mytree_h

struct mytree;
typedef struct mytree *Position;
typedef struct mytree *SearchTree;

SearchTree MakeEmpty(SearchTree T);
Position Find(ElementType X, SearchTree T);
Position FindMin(SearchTree T);
Position FindMax(SearchTree T);
SearchTree Insert(ElementType X, SearchTree T);
SearchTree Delete(ElementType X, SearchTree T);
ElementType Retrieve(Position X);

#endif
