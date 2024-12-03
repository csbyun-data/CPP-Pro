#include"LinkedList_Stack.h"

// Stack의 용량을 결정짓는 매개 변수를 필요로 하지 않는다.
// 링크드 리스트 기반이므로 용량 제한에서 자유로운 것
void LLS_CreateStack( LinkedListStack** Stack) {
	// 스택을 자유 저장소에 생성
	(*Stack) = (LinkedListStack*)malloc(sizeof(LinkedListStack));
	(*Stack)->List = NULL;
	(*Stack)->Top = NULL;
}

void LLS_DestroyStack( LinkedListStack* Stack) {
	while (!LLS_IsEmpty(Stack)) {
		Node* Popped = LLS_Pop(Stack);
		LLS_DestroyNode(Popped);
	}

	// 스택을 자유 저장소에서 해제
	free(Stack);
}

// 노드를 자유 저장소에 생성할 때 문자열을 저장할 공간도 함께 생성해야 하기 때문
Node* LLS_CreateNode(char* NewData) {
	// Node 구조체를 할당하기 위해 한 번
	Node* NewNode = (Node*)malloc(sizeof(Node));
	// Node 구조체의 Data 필드를 할당하기 위해 또 한 번, 모두 2번 호출
	NewNode->Data = (char*)malloc(strlen(NewData) + 1);

	strcpy_s(NewNode->Data, strlen(NewData) + 1, NewData);	// 데이터를 저장한다.

	NewNode->NextNode = NULL;	// 다음 노드에 대한 포인터는 NULL 로 초기화 한다.

	return NewNode;	// 노드의 주소를 반환한다.
}

void LLS_DestroyNode(Node* _Node) {
	// 노드의 자유 저장소에서 Data 필드를 할당 해제하기 위해
	free(_Node->Data);
	// 노드를 할당 해제하기 위해
	free(_Node);
}

void LLS_Push(LinkedListStack* Stack, Node* NewNode) {
	if (Stack->List == NULL) {
		Stack->List = NewNode;
	} else {
		// 스택의 Top 위에 새 노드를 얹는다.
		Stack->Top->NextNode = NewNode;
	}

	// 스택 Top 필드에 새 노드의 주소를 등록한다.
	Stack->Top = NewNode;
}

Node* LLS_Pop(LinkedListStack* Stack) {
	// LLS_Pop() 함수가 반환할 최상위 노드 저장
	Node* TopNode = Stack->Top;

	if (Stack->List == Stack->Top) {
		Stack->List = NULL;
		Stack->Top = NULL;
	} else {
		// Top 아래에 있던 노드를 새로운 CurrentTop에 저장
		Node* CurrentTop = Stack->List;
		while (CurrentTop != NULL && CurrentTop->NextNode != Stack->Top) {
			CurrentTop = CurrentTop->NextNode;
		}

		// CurrentTop을 Top에 저장
		Stack->Top = CurrentTop;
		Stack->Top->NextNode = NULL;
	}

	return TopNode;
}

Node* LLS_Top(LinkedListStack* Stack) {
	return Stack->Top;
}

int LLS_GetSize(LinkedListStack* Stack) {
	int Count = 0;
	Node* Current = Stack->List;

	while (Current != NULL) {
		Current = Current->NextNode;
		Count++;
	}

	return Count;
}

int LLS_IsEmpty(LinkedListStack* Stack) {
	return (Stack->List == NULL);
}
