#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int solve()
{
	int m, t = 0;
	int run = 0;

	printf("���� �ð�(��)? ");
	scanf("%d", &t);

	if (t > 1440)
	{
		printf("���� �ð��� �ִ� 1440���� ���� �� �����ϴ�.\n");

	}

	else if (t < 30)
	{
		m = 2000;
		printf("���� ��� : 2000��\n");
	}

	else if (t > 30)    //���� 30�� �Ѱ�����.
	{
		t = t - 30;
		m = 2000 + ((t + 9) / 10) * 1000;
		m = (m > 25000) ? 25000 : m;
		printf("������� : %d��\n", m);
	}
}
int main()
{
	solve();
	return 0;
}