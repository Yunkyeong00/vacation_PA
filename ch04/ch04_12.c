#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	printf("�̵��Ÿ�(km)? ");
	scanf("%f", &a);

	float b;
	printf("���� �ӷ�(km/h)? ");
	scanf("%f", &b);

	float c;
	c = (a / b) * 60;
	printf("�������� ���� �ҿ� �ð��� %.f�� �Դϴ�.",c);

}

int main()
{
	solve();

	return 0;

}