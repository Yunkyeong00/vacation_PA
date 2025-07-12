#include<stdio.h>


void ASCII()
{
	int a = 0;

	for (int i = 32; i < 127; i++)
	{
		printf("%c", i);
		a++;

		if (a % 24 == 0)
		{
			printf("\n");
		}

	}
}

int main()
{
	ASCII();

	return 0;
}