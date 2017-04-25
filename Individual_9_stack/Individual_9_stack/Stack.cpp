#include "Stack.h"


Stack * newStack()
{
	Stack * init = new Stack;
	init->size = 0;
	return init;
}

//-----------------------------------------------------------------------------//

void pushNode(Stack * l, int element) 
{
	Node * temp = new Node;

	if (l->size == 0) {
		temp->index = 0;
		temp->prev = NULL;
		temp->next = NULL;
		temp->value = element;
		l->start = temp;
		l->end = temp;
		l->size = 1;
		return;
		
	}
	else {
		l->end->next = temp;
		temp->prev = l->end;
		temp->index = l->end->index + 1;
		temp->next = NULL;
		temp->value = element;
		l->size += 1;
		l->end = temp;
		return;
	}


}

//------------------------------------------------------------------------------------//

int byIndex(Stack * s, int index) {
	if (index > s->size) {
		cerr << "Out of range error\n";
		return 0;
	}

	index = (s->size + index) % s->size;
	Node * current = s->start;
	for (int i = 0; i < index; i++) {
		current = current->next;
	}
	return current->value;
}

//-------------------------------------------------------------------------//

int popNode(Stack * popped) {

	if (!popped->size) 
	{
		cerr << "Stack is empty!";
		return -1;
	}

	if (popped->size == 1) {
		int temp = popped->end->value;
		delete popped->end;

		popped->start = NULL;
		popped->end = NULL;
		popped->size = 0;

		return temp;
	}
	
	int temp = popped->end->value;
	Node * tempPointer = popped->end;
	popped->end->prev->next = NULL;
	popped->end = popped->end->prev;
	popped->size -= 1;
	delete tempPointer;
	return temp;
}

//---------------------------------------------------------------//

void output(Stack * outputed)
{
	Node * pointer = outputed->start;
	while (pointer) {
		cout << pointer->value << ' ';
		pointer = pointer->next;
	}
}
