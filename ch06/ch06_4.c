#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double price(double a, double b);

int solve()
{
	double a, b;
	printf("할인율(%%)? ");
	scanf("%lf", &a);

	a = a / 100;

	while (1)
	{
		printf("제품의 가격? ");
		scanf("%lf", &b);

		if (b == 0)
		{
			break;
		}
	
		else
		{
			printf("할인가: %.lf", price(a, b));
		}
	}
	
}

double price(double a, double b)
{
	return b - (b * a);
}



int main()
{
	solve();
	return 0;

}