#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void solve(void)
{
	int num;
	int even = 0, odd = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
			break;

		else if (is_even(num))
			even++;
		else if (is_odd(num))
			odd++;
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d�� �Դϴ�.\n", even, odd);
	return 0;
}

int is_even(int num)
{
	return num % 2 == 0;
}

int is_odd(int num)
{
	return num % 2 != 0;
}

int main()
{
	solve();

	return 0;
}
