
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a;
	printf("��ǰ�� ����? ");
	scanf("%d", &a);

	int b;
	printf("������(%)? ");
	scanf("%d", &b);

	int c, d;
	c = a * (b / 100);
	d = a - c;
	printf("���ΰ�: %f�� (%f�� ����)", c,d);

}

int main()
{
	solve();

	return 0;

}