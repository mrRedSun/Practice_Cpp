#include <stdio.h>
#include <locale.h>
#include <Windows.h>

void main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "");
	printf("Не працюй!\n");
	system("pause");
}