/* ���ϸ�: ch04-6

   * ����:

   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a, b;
	printf("�� ���� ��ǥ (x1 ,y1)? ");
	scanf("%f %f", &a, &b);

	float c, d;
	printf("�� �ٸ� ���� ��ǥ (x2 ,y2)? ");
	scanf("%f %f", &c, &d);

	float m;
	m = (d - b) / (c - a);
	printf("������ ����: %f ", m);

}

int main()
{
	solve();

	return 0;

}