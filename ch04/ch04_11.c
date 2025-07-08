
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a;
	printf("제품의 가격? ");
	scanf("%d", &a);

	int b;
	printf("할인율(%)? ");
	scanf("%d", &b);

	int c, d;
	c = a * (b / 100);
	d = a - c;
	printf("할인가: %f원 (%f원 할인)", c,d);

}

int main()
{
	solve();

	return 0;

}