/* ���ϸ�: ch05-1

 * ����:�Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���,�ʿ�¥���� ���� �� �� �ʿ����� ���ؼ�
 *      ����Ͻÿ�.�ʿ� �̸� ������ �����Ѵ�.
 *
 * �ۼ���:������

 * ��¥: 2025.07. 09

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int result(int a)
{
	printf("�Ž��е� (10���̸� ����): %d\n", a);

	if (a >= 50000)
	{
		printf("50000�� \t%d\n", a / 50000);
		a = a % 50000;
	}

	if (a >= 10000)
	{
		printf("10000�� \t%d\n", a / 10000);
		a = a % 10000;

	}

	if (a >= 5000)
	{
		printf("5000�� \t%d\n", a / 5000);
		a = a % 5000;
	}

	if (a >= 1000)
	{
		printf("1000�� \t%d\n", a / 1000);
		a = a % 1000;
	}

	if (a >= 100)
	{
		printf("100�� \t%d\n", a / 100);
		a = a % 100;
	}

	if (a >= 10);
	{
		printf("10�� \t%d\n", a / 10);
	}
}

int main()
{
	int money = 0;

	printf("�Ž�����? ");
	scanf("%d", &money);

	result(money);

	return 0;
}
