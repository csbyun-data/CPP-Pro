// https://www.cprogramming.com/snippets/source-code/double-linked-list-cplusplus
// An example of a simple double linked list using OOP techniques
#include <iostream>
using namespace std;
 
struct Node {
  double value;
  Node *N,*P;
  Node(double y) {
    value = y;
    N = P = NULL;
  }
};
 
class doubleLinkedList {
    Node *front;
    Node *back;
  public:
    doubleLinkedList()
    {  front = NULL; back = NULL; }
    ~doubleLinkedList(){ destroyList();}
    void appendNodeFront(double x);
    void appendNodeBack(double x);
    void dispNodesForward();
    void dispNodesReverse();
    void destroyList();
};
 
void doubleLinkedList::appendNodeFront(double x) {
  Node *n = new Node(x);
  if( front == NULL) {
    front = n;
    back = n;
  } else {
    front->P = n;
    n->N = front;
    front = n;
  }
}

void doubleLinkedList::appendNodeBack(double x) {
  Node *n = new Node(x);
  if( back == NULL) {
    front = n;
    back = n;
  } else {
    back->N = n;
    n->P = back;
    back = n;
  }
}
 
void doubleLinkedList::dispNodesForward() {
  Node *temp = front;
  cout << "\n\nNodes in forward order:" << endl;
  while(temp != NULL) {
     cout << temp->value << "   " ;
     temp = temp->N;
  }
}

void doubleLinkedList::dispNodesReverse() {
  Node *temp = back;
  cout << "\n\nNodes in reverse order :" << endl;
  while(temp != NULL) {
    cout << temp->value << "   " ;
    temp = temp->P;
  }
}
void doubleLinkedList::destroyList() {
  Node *T = back;
  while(T != NULL) {
    Node *T2 = T;
    T = T->P;
    delete T2;
  }
  front = NULL;
  back = NULL;
}

int main()
{
  doubleLinkedList *list = new doubleLinkedList();
  //append nodes to front of the list
  for( int i = 1 ; i < 4 ; i++)
    list->appendNodeFront(i*1.1);

  list->dispNodesForward();
  list->dispNodesReverse();

  //append nodes to back of the list
  for( int i = 1 ; i < 4 ; i++)
    list->appendNodeBack(11.0 - (1.1 * i));
  cout << endl << endl;
  list->dispNodesForward();
  list->dispNodesReverse();

  cout << endl << endl;
  delete list;
  return 0;
}
 
/* Program's output
Nodes in forward order:
3.3   2.2   1.1
 
Nodes in reverse order :
1.1   2.2   3.3
 
 
 
Nodes in forward order:
3.3   2.2   1.1   9.9   8.8   7.7
 
Nodes in reverse order :
7.7   8.8   9.9   1.1   2.2   3.3
*/
