#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a;
	float b,c;
	printf("����? ");
	scanf("%d", &a);

	printf("������(%%)? ");
	scanf("%f", &b);

	for (int i = 1; i < 11; i++)
	{
		c = b * 10000;
		printf("1��° ����:%f, �����հ�:%d\n",c, a + c);
		b = c;
	}
}

int main()
{
	solve();

	return 0;
}
