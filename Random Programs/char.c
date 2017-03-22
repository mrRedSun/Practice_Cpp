#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
	char* loc = setlocale(LC_ALL, "UKR");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("locale: %s\n", loc);

	int n = 0;

	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			printf("%c ", (char)(n));
			n++;
		}
		printf("\n");
	}


	return 0;
}
