/* ���ϸ�: ch04-5

   * ����: 

   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

void solve()
{
	float a;
	printf("�������� ����? ");
	scanf("%f", &a);

	float b;
	printf("����? ");
	scanf("%f", &b);

	float c;
	c = a * a * PI * b;
	printf("������� ����: %f ", c);

}

int main()
{
	solve();

	return 0;

}