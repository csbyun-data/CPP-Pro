#include"Array_Stack.h"

int main()
{
	int i = 0;
	ArrayStack* Stack = NULL;

	AS_CreateStack(&Stack, 10);

	AS_Push(Stack, 3);
	AS_Push(Stack, 37);
	AS_Push(Stack, 11);
	AS_Push(Stack, 12);

	cout << "Capacity: " << Stack->Capacity << ", Size: " << AS_GetSize(Stack)
		<< ", Top: " << AS_Top(Stack) << endl << endl;

	for ( i=0; i<4; i++) 	{
		if (AS_IsEmpty(Stack))
			break;

		cout << "Popped: " << AS_Pop(Stack) << ", ";

		if (!AS_IsEmpty(Stack))
			cout << "Current Top: " << AS_Top(Stack) << endl;
		else
			cout << "Stack Is Empty." << endl;
	}

	AS_DestroyStack(Stack);

	return 0;
}
