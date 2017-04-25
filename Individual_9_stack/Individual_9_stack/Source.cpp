#include "Stack.h"

int main()
{
	cout << "Enter size of the stack: ";

	int n; cin >> n;

	Stack * myStack = newStack();
	int temp;
	for (int i = 0; i < n; i++) {
		cout << "\nEnter element #" << i + 1 << endl;
		cin >> temp;
		pushNode(myStack, temp);
	}
	
	output(myStack);

	cout << endl;
	
	for (int i = myStack->size / 3; i >= 0; i--)
	{
		cout << byIndex(myStack, i * 3) << " ";
	}					
	

	for (int i = myStack->size - 1; i >= 0; i--) {
		if (i % 3 == 0) continue;

		cout << byIndex(myStack, i) << " ";
	}
	
	
	system("pause");
	return 0;
}