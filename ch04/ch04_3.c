/* ���ϸ�: ch04-3

   * ����: ������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
           ������ g ������ �Է¹ް�, ���Ǵ� cm^3 ������ �Է¹޴´�.

   * �ۼ���: ������

   * ��¥: 2025.07.08

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void solve()
{
	float a;
	printf("����(g)?");
	scanf("%f", &a);
	float b;
	printf("����(��������Ƽ����)?");
	scanf("%f", &b);
	double c;
	c = a / b;
	printf("�е�: %lf", c);

}

int main()
{
	solve();

	return 0;
}