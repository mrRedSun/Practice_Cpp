#include <stdio.h>

int main()
{
	int triangle[100];
	triangle[0] = 1;


	
	int current_pos = 1;
	for (int i = 1; i < 1000; i++)
	{
		for (int j = 1; j <= i; j++) 
		{
			triangle[current_pos + j] = triangle[current_pos - j] + triangle[current_pos - j - 1];
			current_pos++;
		}
	}

	system("pause");
	return 0;
}