#pragma once
#include "node.h"
struct queue {
	node *front;
	node *rear;
};

// queue library prototypes
void initQ(queue & q);
void printQ(queue & q);
void enQ(queue & q, int key);
int  deQ(queue & q);
