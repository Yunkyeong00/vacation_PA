/* ���ϸ�: ch05-8

 * ����:��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�. &��Ʈ�� AND |�� or, ^�� ��Ʈ XOR������ ó���Ѵ�
 *		"0xAB & 0xCC" ó�� ������� �Է��ؼ� ���� ����� ���Ѵ�.
 *		��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8���� 16������ ����� �� �ְ� �ϰ� ������ ����� 16������ ����Ѵ�.
 *
 * �ۼ���:������

 * ��¥: 2025.7. 09

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void solve()
{
	unsigned int a, b;
	char bit;

	printf("��Ʈ �����?");
	scanf("%i %c %i", &a, &bit, &b);

	if (bit == '&')
	{
		printf("%X %c %X=X", a, bit, b, (a & b));
	}

	else if (bit == '|')
	{
		printf("%X %c %X=%X", a, bit, b, (a | b));
	}

	else if (bit == '^')
	{
		printf("%X %c %X=%X", a, bit, b, (a ^ b));
	}

	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}

	return 0;
}

int main()
{
	solve();
	return 0;
}