#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a, b;
	double Ec, total;
	printf("월 사용량 (kwh)? ");
	scanf("%d", &a);

	if (a <= 200)
	{
		b = 910;
	}
	else if(a <= 400)
	{
		b = 1600;
	}

	else
	{
		b = 7300;
	}

	if (a <= 200)
	{
		Ec = a * 93.3;
	}

	else if (a <= 400)
	{
		Ec = (200 * 93.3) + ((a - 200) * 187.9);
	}

	else
	{
		Ec = (200 * 93.3) + (200*187.9)+ ((a - 400) * 280.6);
	}

	total = b + Ec;

	printf("전기 요금 합계: %.lf 원\n", total);
	printf("    -기본 요금: %d 원\n", b);
	printf("    -전력량요금: %.lf 원\n", Ec);

}

int main()
{
	solve();

	return 0;
}