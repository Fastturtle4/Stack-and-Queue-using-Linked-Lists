//---------------------------------------------------------------------------------------------------
//                                       Stack/Queue Test Program
//                                            CS 215 - Spring 2017
//---------------------------------------------------------------------------------------------------
// Author:   YOUR NAME HERE
// Section:  YOUR SECTION HERE
// Date:     DATE COMPLETED HERE
//---------------------------------------------------------------------------------------------------
// A menu driven program to test the enQ and deQ functions of a queue, and the push and pop functions
// of a stack.
//---------------------------------------------------------------------------------------------------

#include <iostream>
#include <limits>

using namespace std;

// TO DO: include the local stack and queue header files
#include "stack.h"
#include "queue.h"

//---------------------------------------------------------------------------------------------------
//                                           testPush
//---------------------------------------------------------------------------------------------------
// Given a stack; asks the user for a key and invokes push(). Prints the stack.
void testPush(stack & s) {
	int key;
	cout << "Enter key: ";
	cin >> key;
	push(s, key);
	printStack(s);
} // testPush()

  //---------------------------------------------------------------------------------------------------
  //                                       testPop
  //---------------------------------------------------------------------------------------------------
  // Given a stack, pops the top, prints the item popped, and prints the stack
void testPop(stack & s) {
	int key = pop(s);
	cout << "Popped: " << key << endl;
	printStack(s);
} // testPop()

  //---------------------------------------------------------------------------------------------------
  //                                       testEnQ
  //---------------------------------------------------------------------------------------------------
  // Given a Q, asks the user to enter a key and enQ's it, then prints the Q
void testEnQ(queue & q) {
	int key;
	cout << "Enter key: ";
	cin >> key;
	enQ(q, key);
	printQ(q);
} // testEnQ()

  //---------------------------------------------------------------------------------------------------
  //                                       testDeQ
  //---------------------------------------------------------------------------------------------------
  // Given a Q, deQ's the next item and prints it, and prints the Q
void testDeQ(queue & q) {
	int key = deQ(q);
	cout << "Dequeued: " << key << endl;
	printQ(q);
} // testDeQ()

  //---------------------------------------------------------------------------------------------------
  //                                       askOption
  //---------------------------------------------------------------------------------------------------
int askOption() {
	int option;
	cout << "\nTest Menu: \n";
	cout << "1. Push \n";
	cout << "2. Pop \n";
	cout << "3. EnQ \n";
	cout << "4. DeQ \n";
	cout << "5. Print stack and queue\n";
	cout << "6. Exit\n";
	cout << "Enter option: ";
	cin >> option;
	return option;
} // askOption()

  //---------------------------------------------------------------------------------------------------
  //                                       main
  //---------------------------------------------------------------------------------------------------
void main() {
	stack s;
	queue q;
	int option = 1;

	initStack(s);
	initQ(q);

	while (option != 6) {
		option = askOption();

		switch (option) {
		case  1: testPush(s); break;
		case  2: testPop(s); break;
		case  3: testEnQ(q); break;
		case  4: testDeQ(q); break;
		case  5: printStack(s);  printQ(q);  break;
		case  6: cout << "Exiting test program\n";
		default: cout << "Invalid option!\n";
		}
	}
} // main()