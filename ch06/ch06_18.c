#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int divisors(int num);

int main()
{
	print();

	return 0;
}

int print()
{
	srand(time(NULL));

	int a = rand() % 1000;
	int b = rand() % 1000;
	int c = rand() % 1000;

	divisors(a);
	divisors(b);
	divisors(c);
}

int divisors(int num)
{
	int count=0;
	printf("%dÀÇ ¾à¼ö: ", num);

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("=>ÃÑ %d°³\n", count);

}