#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double price(double a, double b);

int solve()
{
	double a, b;
	printf("������(%%)? ");
	scanf("%lf", &a);

	a = a / 100;

	while (1)
	{
		printf("��ǰ�� ����? ");
		scanf("%lf", &b);

		if (b == 0)
		{
			break;
		}
	
		else
		{
			printf("���ΰ�: %.lf", price(a, b));
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