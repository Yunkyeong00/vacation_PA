#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void solve()
{
	float a, b;
	printf("������ ������ (x1, y1)? ");
	scanf("%f %f", &a,&b);

	float c, d;
	printf("������ ���� (x1, y2)? ");
	scanf("%f %f", &c, &d);

	float result, num;
	num = (a - c) * (a - c) + (b - d) * (b - d);
	result = sqrt(num);
	printf("������ ����: %f", result);

}

int main()
{
	solve();

	return 0;

}