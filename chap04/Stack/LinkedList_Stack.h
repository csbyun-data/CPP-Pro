#ifdef LINKEDLIST_STACK.H
#define LINKEDLIST_STACK.H

#include <iostream>
#include <csting>
#include <cstdlib>
using namespace std;

typedef struct tagNode {
	// 자유 저장소에 할당된 문자열의 주소를 가리킨다.
	char* Data;
	// NextNode 포인터는 자기 위에 쌓여있는 노드의 주소를 가리킨다.
	struct tagNode* NextNode;
} Node;

typedef struct tagLinkedListStack {
	// List 포인터는 자유 저장소에 존재하는 헤드 노드의 주소를 가리킨다.
	Node* List;
	// Top 포인터는 자유 저장소에 존재하는 테일 노드의 주소를 가리킨다.
	Node* Top;
} LinkedListStack;

void LLS_CreateStack( LinkedListStack** Stack);
void LLS_DestroyStack( LinkedListStack* Stack);

Node* LLS_CreateNode( char* NewData);
void LLS_DestroyNode( Node* _Node);

void LLS_Push( LinkedListStack* Stack, Node* NewNode);
Node* LLS_Pop( LinkedListStack* Stack);

Node* LLS_Top( LinkedListStack* Stack);
int LLS_GetSize( LinkedListStack* Stack);
int LLS_IsEmpty( LinkedListStack* Stack);

#endif // !LINKEDLIST_STACK_H
