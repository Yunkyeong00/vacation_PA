#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	printf("�⺻ ���? ");
	scanf("%f", &a);

	float b;
	printf("�� ��뷮(kwh)?");
	scanf("%f", &b);

	float result;
	result = a + (b * 190);
	printf("���� ���: %.f ��", result);

}

int main()
{
	solve();

	return 0;

}