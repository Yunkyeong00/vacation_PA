/* ���ϸ�: ch04-7

   * ����:

   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void solve()
{
	float a = 0;
	printf("�ظ�? ");
	scanf("%f", &a);

	float b = 0;
	printf("����? ");
	scanf("%f", &b);

	float c = 0;
	c = (a * a) + (b * b);
	c = sqrt(c);
	printf("������� ����: %f ", c);

}

int main()
{
	solve();

	return 0;

}