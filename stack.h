#pragma once
#include "node.h"
struct stack {
	node* head;
};
void initStack(stack & s);
void printStack(stack & s);
int pop(stack & s);
void push(stack & s, int key);