/* ���ϸ�: ch04-2

   * ����: ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ������ ������ ����.

   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	printf("���(g)? ");
	scanf("%f", &a);

	float b;
	printf("����(g)? ");
	scanf("%f", &b);

	float c;
	c = (b / (a + b)) * 100;
	printf("��: %.2f %%", c);

}

int main()
{
	solve();

	return 0;

}