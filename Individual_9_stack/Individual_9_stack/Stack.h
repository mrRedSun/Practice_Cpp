#include <iostream>

using namespace std;

struct Node
{
	Node * prev;
	int index;
	int value;
	Node * next;
};

struct Stack
{
	Node * start;
	Node * end;
	int size;
};

Stack * newStack();

void output(Stack * outputed);

void pushNode(Stack * l, int element);

int popNode(Stack * popped);

int byIndex(Stack * s, int index);