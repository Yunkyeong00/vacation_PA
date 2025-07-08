
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	printf("제품의 가격? ");
	scanf("%f", &a);

	float b;
	printf("할인율(%)? ");
	scanf("%f", &b);

	float c, d;
	c = a * (b / 100);
	d = a - c;
	printf("할인가: %.f원 (%.f원 할인)", d,c);

}

int main()
{
	solve();

	return 0;

}