// https://www.cprogramming.com/snippets/source-code/singly-linked-list-with-sentinel
/*
    # a singly linked list with a sentinel node implementation #
     
    a sentinel allows to gather useful information concerning 
    the list and access them in O(1) time; most of the actions 
    would be much simpler without last, min or max, but they
    are good learning material; the sentinel itself makes many 
    operations easier - no more "fun" with double pointers.
     
    TL;DR: compile and enjoy dynamic custom linked list management
           analyze to learn about pointers, structs and linked lists
*/
 
/* LIBS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
 
/* DEFS */
typedef float node_data; //stack list data type - set for integers
 
typedef struct _node Node; //short name for the node type
struct _node //node structure format {
  node_data data;
  Node *next;
};
 
typedef struct sentinel Sentinel; //stack sentinel
struct sentinel //sentinel node format {
  int count;
  node_data sum;
  node_data max;
  node_data min;
  Node *head;
  Node *last;
};
 
/* PROTOS */
void stack_init(Sentinel **sentinel); //initialize the stack
void stack_push(Sentinel *sentinel, node_data d); //pushes a value d onto the stack
void stack_append(Sentinel *sentinel, node_data d); //appends a value to the stack
void stack_pop(Sentinel *sentinel); //removes the head from the stack & returns its value
void stack_drop(Sentinel *sentinel); //removes the last node
void stack_print(Sentinel *sentinel); //prints all the stack list data
void stack_clear(Sentinel *sentinel); //clears the stack of all elements
int stack_elem(Sentinel *sentinel, node_data d); //checks for an element
int stack_count(Sentinel *sentinel, node_data d); //counts occurencies of d
node_data stack_max(Sentinel *sentinel); //returns stack maximum
node_data stack_min(Sentinel *sentinel); //returns stack minimum
 
void menu(Sentinel *sentinel); //program menu
 
/* MAIN */
int main(void)
{   
  //stack initialization
  Sentinel *sentinel = NULL;
  stack_init(&sentinel);
   
  menu(sentinel);

  return 0;
}
 
/* STACK LIST FOOS */
void stack_init(Sentinel **sentinel) {
  //initialization of sentinel information
  *sentinel = malloc(sizeof(Sentinel));
  Sentinel *sntnl = *sentinel;
  sntnl -> count = 0;
  sntnl -> sum = 0;
  sntnl -> max = -FLT_MAX; //minGW fails @ FLT_MIN
  sntnl -> min = FLT_MAX;
  sntnl -> head = NULL;
  sntnl -> last = NULL;
}
 
void stack_push(Sentinel *sentinel, node_data d) {
  Node *node_new = malloc(sizeof(Node));
  if(!node_new) {puts("Out of memory"); exit(EXIT_FAILURE);}
   
  //sentinel info
  if(!(sentinel -> last))
    sentinel -> last = node_new;
   
  //standard push [O(1)]
  node_new -> data = d;
  node_new -> next = sentinel -> head;
  sentinel -> head = node_new;
   
  //sentinel info
  ++(sentinel -> count);
  sentinel -> sum += d;
  if(d > sentinel -> max)
    sentinel -> max = d;
  if(d < sentinel -> min)
    sentinel -> min = d;
}
 
void stack_append(Sentinel *sentinel, node_data d) {
  Node *node_new = malloc(sizeof(Node));
  if(!node_new) {puts("Out of memory"); exit(EXIT_FAILURE);}
   
  //node init
  node_new -> data = d;
  node_new -> next = NULL;
   
  if(!(sentinel -> head)) { //if the stack is empty, just do the push [O(1)]
    //standard push
    node_new -> next = sentinel -> head;
    sentinel -> head = node_new;
  } else { //otherwise append to the last node [O(n)]
    Node *node_curr = sentinel -> head;
     
    while(node_curr) {
      if(!(node_curr -> next)) {
          node_curr -> next = node_new;
          break;
      }
      node_curr = node_curr -> next;
    }
  }
   
  //sentinel info [O(1)]
  sentinel -> last = node_new;
  ++(sentinel -> count);
  sentinel -> sum += d;
  if(d > sentinel -> max)
      sentinel -> max = d;
  if(d < sentinel -> min)
      sentinel -> min = d;
}
 
void stack_pop(Sentinel *sentinel) {
  Node *node_togo = sentinel -> head;
  int flag = 0;
   
  if(node_togo) {
    //sentinel info [O(1)]
    --(sentinel -> count);
    sentinel -> sum -= node_togo -> data;
    if(node_togo -> data == sentinel -> max)
        flag = 1;
    if(node_togo -> data == sentinel -> min)
        flag += 2;
    if(!(node_togo -> next))
        sentinel -> last = NULL;
     
    //standard pop [O(1)]
    sentinel -> head = node_togo -> next;
    free(node_togo);
     
    //sentinel info [O(n)]
    switch(flag) {
    case 1:
      sentinel -> max = stack_max(sentinel);
      break;
    case 2:
      sentinel -> min = stack_min(sentinel);
      break;
    case 3:
      sentinel -> max = stack_max(sentinel);
      sentinel -> min = stack_min(sentinel);
      break;
    }
  }
}
 
void stack_drop(Sentinel *sentinel) {
  Node *node_togo = sentinel -> last;
  int flag = 0;
   
  if(node_togo) {
    //sentinel info [O(1)]
    --(sentinel -> count);
    sentinel -> sum -= node_togo -> data;
    if(node_togo -> data == sentinel -> max)
      flag = 1;
    if(node_togo -> data == sentinel -> min)
      flag += 2;
     
    //if there is only one node, inform the sentinel [O(1)]
    if(sentinel -> head == sentinel -> last) {
      sentinel -> head = NULL;
      sentinel -> last = NULL;
    }
     
    //drop the last node [O(n)]
    free(node_togo);
    Node *node_curr = sentinel -> head;
    while(node_curr) {
      if(node_curr -> next == node_togo) {
        sentinel -> last = node_curr;
        node_curr -> next = NULL;
        break;
      }
      node_curr = node_curr -> next;
    }
     
    //sentinel info [O(n)]
    switch(flag) {
    case 1:
      sentinel -> max = stack_max(sentinel);
      break;
    case 2:
      sentinel -> min = stack_min(sentinel);
      break;
    case 3:
      sentinel -> max = stack_max(sentinel);
      sentinel -> min = stack_min(sentinel);
      break;
    }
  }
}
 
void stack_print(Sentinel *sentinel) {
  Node *node_curr = sentinel -> head;

  if(!sentinel -> head) //if the stack is empty, report it [O(1)]
    puts("nothing");
  else { //otherwise print all the data from nodes [O(n)]
    while(node_curr) {
      printf("%.4f ", node_curr -> data);
      node_curr = node_curr -> next;
    }
    putchar('\n');
  }
}
 
void stack_clear(Sentinel *sentinel) {
  //pop everything [O(n)]
  while(sentinel -> head)
      stack_pop(sentinel);
}
 
int stack_elem(Sentinel *sentinel, node_data d) {
  Node *node_curr = sentinel -> head;
   
  //traverse the stack in search for d [O(n)]
  while(node_curr) {
    if(node_curr -> data == d)
      return 1;
    else
      node_curr = node_curr -> next;
  }
  return 0;
}
 
int stack_count(Sentinel *sentinel, node_data d) {
  Node *node_curr = sentinel -> head;
  int n = 0;
   
  //traverse the stack in search for ds [O(n)]
  while(node_curr) {
    if(node_curr -> data == d)
        ++n;
    node_curr = node_curr -> next;
  }
  return n;
}
 
node_data stack_max(Sentinel *sentinel) {
  Node *node_curr = sentinel -> head;
   
  //if the stack is empty, set the maximum to potential minimum [O(1)]
  if(!node_curr)
    return -FLT_MAX; //minGW fails @ FLT_MIN
   
  //otherwise search for it [O(n)]
  node_data max = node_curr -> data;
  while(node_curr) {
    if(node_curr -> data > max)
      max = node_curr -> data;
    node_curr = node_curr -> next;
  }
  return max;
}
 
node_data stack_min(Sentinel *sentinel) {
  Node *node_curr = sentinel -> head;

  //if the stack is empty, set the minimum to potential maximum [O(1)]
  if(!node_curr)
    return FLT_MAX;
   
  //otherwise search for it [O(n)]
  node_data min = node_curr -> data;
  while(node_curr) {
    if(node_curr -> data < min)
      min = node_curr -> data;
    node_curr = node_curr -> next;
  }
  return min;
}
 
/* MAIN MENU */
void menu(Sentinel *sentinel) {
  //variables
  char command[64];
  node_data x;
  char info[] =
      "\nAvailable commands are: \nprint, push x, pop,"
      " len, sum, avg, max, \nmin, elem x, count x, "
      "append x, drop, \nhead, last, clear, help, "
      "exit.";
   
  puts("Welcome to the linked list command center");
  puts(info);
  printf("\n");
   
  //program menu
  while(fgets(command, 64, stdin)) {
    //PUSH
    if(strstr(command, "push ")) {
      sscanf(command, "push %f", &x);
      stack_push(sentinel, x);
      printf("Pushed %.4f\n", x);
    }
    //POP
    else if(!strcmp(command, "pop\n")) {
      if(sentinel -> head) {
        stack_pop(sentinel);
        puts("Popped the top node");
      } else
        puts("Nothing to pop");
    }
    //LEN
    else if(!strcmp(command, "len\n"))
      printf("Stack length is %d\n", sentinel -> count);
    //SUM
    else if(!strcmp(command, "sum\n"))
      printf("Stack sum is %.4f\n", sentinel -> sum);
    //AVG
    else if(!strcmp(command, "avg\n")) {
      if(!(sentinel -> count))
        puts("Stack avg is 0.0000");
      else
        printf("Stack avg is %.4f\n", (sentinel -> sum)/(sentinel -> count));
    }
    //MAX
    else if(!strcmp(command, "max\n")) {
      if(sentinel -> head)
        printf("Stack maximum is %.4f\n", sentinel -> max);
      else
        puts("Stack is empty");
    }
    //MIN
    else if(!strcmp(command, "min\n")) {
      if(sentinel -> head)
        printf("Stack minimum is %.4f\n", sentinel -> min);
      else
        puts("Stack is empty");
    }
    //ELEM
    else if(strstr(command, "elem ")) {
      sscanf(command, "elem %f", &x);
      if(stack_elem(sentinel, x))
        printf("Stack does contain %.4f\n", x);
      else
        printf("Stack does not contain %.4f\n", x);
    }
    //COUNT
    else if(strstr(command, "count ")) {
      sscanf(command, "count %f", &x);
      printf("There are %d elements that equal %.4f\n", stack_count(sentinel, x), x);
    }
    //PRINT
    else if(!strcmp(command, "print\n")) {
      printf("Stack contains ");
      stack_print(sentinel);
    }
    //APPEND
    else if(strstr(command, "append ")) {
      sscanf(command, "append %f", &x);
      stack_append(sentinel, x);
      printf("Appended %.4f\n", x);
    }
    //DROP
    else if(!strcmp(command, "drop\n")) {
      if(sentinel -> last) {
        stack_drop(sentinel);
        puts("Dropped the last node");
      }
      else
        puts("Nothing to drop");
    }
    //HEAD
    else if(!strcmp(command, "head\n"))
      if(sentinel -> head)
        printf("Stack head contains %.4f\n", sentinel -> head -> data);
      else
        puts("Stack is empty");
    //LAST
    else if(!strcmp(command, "last\n")) {
      if(sentinel -> last)
        printf("Stack last contains %.4f\n", sentinel -> last -> data);
      else
        puts("Stack is empty");
    }
    //CLEAR
    else if(!strcmp(command, "clear\n")) {
      stack_clear(sentinel);
      puts("Stack was cleared");
    }
    //HELP
    else if(!strcmp(command, "help\n"))
      puts(info);
    //EXIT
    else if(!strcmp(command, "exit\n"))
      exit(EXIT_SUCCESS);
    //DEFAULT
    else
      puts("Unknown command");
    printf("\n");
  }
}
