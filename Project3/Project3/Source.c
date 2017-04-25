#include <stdio.h>
#include <locale.h>
#include <Windows.h>
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Ukrainian");
	printf("Привіт");
	system("pause");
}