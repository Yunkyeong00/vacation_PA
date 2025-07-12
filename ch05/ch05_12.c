#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a;
	float b,c;
	printf("원금? ");
	scanf("%d", &a);

	printf("연이율(%%)? ");
	scanf("%f", &b);

	for (int i = 1; i < 11; i++)
	{
		c = b * 10000;
		printf("1년째 이자:%f, 원리합계:%d\n",c, a + c);
		b = c;
	}
}

int main()
{
	solve();

	return 0;
}
