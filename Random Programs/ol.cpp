#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct node
{
	int val;
	node *next;
};

void push(int val, node *&stack)
{
	node *p = new node;
	p->val = val;
	p->next = stack;
	stack = p;
}
int pop(node *&stack)
{
	node *t = stack;
	int val = stack->val;
	stack = stack->next;
	delete t;
	return val;
}
bool calculate(char *line)
{
	int n = strlen(line);
	node* stack;
	node* stackop;
	bool s1, s2;
	for (int i = 0; i < n; i++)
	{
		if ((line[i] == 't') || line[i] == 'f')
		{
			push(line[i], stack);
		}
		else if (line[i] == '|')
		{
			s1 = pop(stack);
			s2 = pop(stack);
			push((s1 || s2), stack);
		}
		else if (line[i] == '&')
		{
			s1 = pop(stack);
			s2 = pop(stack);
			push((s1 && s2), stack);
		}
	}
	s1 = pop(stack);
	return s1;
}

int main()
{
	char s[256];
	node* stack;
	node* stackop;
	bool s1, s2;
	ifstream inf;
	inf.open("file.txt");
	inf.getline(s, sizeof(s));
	cout << s << endl;
	cout << calculate(s) << endl;
	inf.close();

	return 0;
}
