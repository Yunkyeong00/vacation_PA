#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a, b;
	double result, USD;

	printf("��/�޷� �Ÿű�����?");
	scanf("%d", &a);

	printf("ȯ�������(0~100%)?");
	scanf("%d", &b);

	const double s = 1.75 / 100;
	result = a + a * s * (1 - b / 100.0);
	printf("�޷� �� �� ȯ���� %lf�Դϴ�.\n", result);

	float c;
	printf("������ �޷�(USD)?");
	scanf("%f", &c);
	USD = result * c;
	printf("USD %.2f �� ��==> KRW %.2f", c, USD);
}

int main()
{
	solve();
	return 0;
}