#include <stdio.h>
#include <stdlib.h>

int main()
{
	print();

	return 0;

}

void print()
{
	int random;
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		random = rand() % 100;
		sum += random;
	}

	printf("%d", sum);
}