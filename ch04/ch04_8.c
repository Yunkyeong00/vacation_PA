/* ���ϸ�: ch04-8

   * ����:

   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.141592


void solve()
{
	float a = 0;
	float b = 0;
	float v;


	printf("�������� ����? ");
	scanf("%f", &a);

	b = pow(a, 3);
	v = 4.0 / 3.0 * b * PI;

	printf("������� ����: %f ", v);

}

int main()
{
	solve();

	return 0;

}