#include <iostream>
#include "queue.h"
using namespace std;

//---------------------------------------------------------------------------------------------------
//                                           initQ
//---------------------------------------------------------------------------------------------------
// Given a queue, initializes it to empty
void initQ(queue & q) {
	q.front = NULL;
	q.rear = NULL;
} // initQ()

  //---------------------------------------------------------------------------------------------------
  //                                       printQ
  //---------------------------------------------------------------------------------------------------
void printQ(queue & q) {
	cout << "QUEUE ";
	if (q.front == NULL) {
		return;
	}
	node *p = q.front;
	while (p != NULL) {
		cout << p->key << " ";
		p = p->next;
	}
	cout << q.rear->key;
} // printQ()

  //---------------------------------------------------------------------------------------------------
  //                                       enQ
  //---------------------------------------------------------------------------------------------------
  // Given a Q and the key for a new node, allocates a node, populates the key
  // member with the given key, and inserts the new node to the rear of the Q.
void enQ(queue & q, int key) {
	node *p = new node;
	p->key = key;
	p->next = NULL;
	if (q.front == NULL && q.rear == NULL) {
		q.front = q.rear = p;
		return;
	}
	else {
		q.rear->next = p;
	}
	q.rear = p;
} // enQ()

  //---------------------------------------------------------------------------------------------------
  //                                       deQ
  //---------------------------------------------------------------------------------------------------
  // Given a Q, deQ's the next item and returns it. Leaves no Garbage.
int deQ(queue & q) {
	if (q.front == NULL)
		return INT_MAX;
	node *p = new node;
	p->key = q.front->key;
	p->next = NULL;
	if (q.front == q.rear) {
		q.front = q.rear = NULL;
	}
	else {
		q.front = q.front->next;
	}
	return p->key;
} // deQ()
