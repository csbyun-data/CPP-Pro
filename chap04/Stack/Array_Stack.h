#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <iostream>
#include <cstdlib>
using namespace std;

typedef in ElementType;

typedef struct tagNode
{
  ElementType Data;
} Node;

typedef struct tagArrayStack
{
  int Capacity;
  int Top;

  // Nodes포인터는 자유 저장소에 할당한 배열의 첫 번째 요소를 가리킴
  Node *Nodes;
} ArrayStack;

void AS_CreateStack( ArrayStack **Stack, int Capacity);
void AS_DestroyStack( ArrayStack *Stack);
void AS_Push( ArrayStack *Stack, ElementType Data);
ElementType AS_Pop( ArrayStack *Stack);
ElementType AS_Top( ArrayStack* Stack);
int AS_GetSize( ArrayStack* Stack);
int AS_IsEmpty( ArrayStack* Stack);
int AS_ISFull( ArrayStack* Stack);

#endif

