//TO DO: include needed libraries
#include <iostream>
#include "stack.h"
using namespace std;
//---------------------------------------------------------------------------------------------------
//                                           initStack
//---------------------------------------------------------------------------------------------------
// Given a stack, initializes it to empty
void initStack(stack & s) {
	s.head = NULL;
} // initStack()

  //---------------------------------------------------------------------------------------------------
  //                                           printStack
  //---------------------------------------------------------------------------------------------------
  // Given a stack: prints the keys of all nodes on the stack from top to bottom, left to right on 1 line
  // Ex: STACK: 22 87 39 45     (where 22 is the top and 45 is the bottom)
void printStack(stack & s) {
	node *p = s.head;
	while (p != NULL) {
		cout << p->key << " ";
		p = p->next;
	}
} // printStack()

  //---------------------------------------------------------------------------------------------------
  //                                           pop
  //---------------------------------------------------------------------------------------------------
  // removes the top element of the stack, deallocates it, and returns its key
int pop(stack & s) {
	if (s.head == NULL)
		return INT_MAX;
	node *p = s.head;
	int r = 0;
	r = p->key;
	s.head = s.head->next;
	delete p;
	return r;
} // pop()

  //---------------------------------------------------------------------------------------------------
  //                                           push
  //---------------------------------------------------------------------------------------------------
  // Given a stack and the key of a new node; creates a new node and populates it with the given key;
  // pushes the new node on the stack.
void push(stack & s, int key) {
	node *p = new node;
	p->key = key;
	p->next = NULL;
	if (s.head != NULL)
		p->next = s.head;
	s.head = p;
} // push()
