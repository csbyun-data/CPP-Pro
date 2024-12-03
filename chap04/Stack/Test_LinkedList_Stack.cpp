#include"LinkedList_Stack.h"

int main()
{
	int i = 0;
	int Count = 0;
	Node* Popped;

	LinkedListStack* Stack;

	LLS_CreateStack(&Stack);

	LLS_Push(Stack, LLS_CreateNode((char*)"abc"));
	LLS_Push(Stack, LLS_CreateNode((char*)"def"));
	LLS_Push(Stack, LLS_CreateNode((char*)"efg"));
	LLS_Push(Stack, LLS_CreateNode((char*)"hij"));

	Count = LLS_GetSize(Stack);
	cout << "Size: " << Count << ", Top: " 
		<< LLS_Top(Stack)->Data << endl << endl;

	for (i = 0; i < Count; i++) {
		if (LLS_IsEmpty(Stack))
			break;

		Popped = LLS_Pop(Stack);

		cout << "Popped: " << Popped->Data << ", ";

		LLS_DestroyNode(Popped);

		if (!LLS_IsEmpty(Stack))
			cout << "Current Top: " << LLS_Top(Stack)->Data << endl;
		else
			cout << "Stack Is Empty." << endl;
	}

	LLS_DestroyStack(Stack);

	return 0;
}
