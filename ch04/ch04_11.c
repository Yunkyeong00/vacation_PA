
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	printf("��ǰ�� ����? ");
	scanf("%f", &a);

	float b;
	printf("������(%)? ");
	scanf("%f", &b);

	float c, d;
	c = a * (b / 100);
	d = a - c;
	printf("���ΰ�: %.f�� (%.f�� ����)", d,c);

}

int main()
{
	solve();

	return 0;

}