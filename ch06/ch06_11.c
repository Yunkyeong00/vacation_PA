#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int print();
double calculator(double a, char b, double c);

int main()
{
	print();

	return 0;
}

int print()
{
	while (1)
	{
		double a, c;
		char b;


		printf("수식 (0 0 0 입력 시 종료)?");
		scanf("%lf %c %lf", &a, &b, &c);

		if (a == 0 && b == '0' && c == 0)
		{
			break;
		}


		printf("%lf\n", calculator(a, b, c));

	}
}

double calculator(double a,char b,double c)
{
	switch(b)
	{
		case '+':
			return a + c;
		case '-':
			return a - c;
		case '*':
			return a * c;
		case '/':
			return a / c;
		default:
			printf("잘못 입력하셨습니다.");
	}
}