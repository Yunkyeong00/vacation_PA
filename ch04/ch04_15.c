#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a, b;
	double result, USD;

	printf("원/달러 매매기준율?");
	scanf("%d", &a);

	printf("환율우대율(0~100%)?");
	scanf("%d", &b);

	const double s = 1.75 / 100;
	result = a + a * s * (1 - b / 100.0);
	printf("달러 살 때 환율은 %lf입니다.\n", result);

	float c;
	printf("구입할 달러(USD)?");
	scanf("%f", &c);
	USD = result * c;
	printf("USD %.2f 살 때==> KRW %.2f", c, USD);
}

int main()
{
	solve();
	return 0;
}