// hello_worldy.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{	
	string a;

	cout << "What is your name";
	cin >> a;
	cout << "Hello, " << a << "\n";
	system("pause");
    return 0;
}

