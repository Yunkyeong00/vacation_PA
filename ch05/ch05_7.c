#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a, b;
	double Ec, total;
	printf("�� ��뷮 (kwh)? ");
	scanf("%d", &a);

	if (a <= 200)
	{
		b = 910;
	}
	else if(a <= 400)
	{
		b = 1600;
	}

	else
	{
		b = 7300;
	}

	if (a <= 200)
	{
		Ec = a * 93.3;
	}

	else if (a <= 400)
	{
		Ec = (200 * 93.3) + ((a - 200) * 187.9);
	}

	else
	{
		Ec = (200 * 93.3) + (200*187.9)+ ((a - 400) * 280.6);
	}

	total = b + Ec;

	printf("���� ��� �հ�: %.lf ��\n", total);
	printf("    -�⺻ ���: %d ��\n", b);
	printf("    -���·����: %.lf ��\n", Ec);

}

int main()
{
	solve();

	return 0;
}