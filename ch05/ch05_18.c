#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void solve()
{
	while (1)
	{
		int time, m;
		printf("���� �ð�(��)? ");
		scanf("%d", &time);
		
		if (time == 0)
			break;

		if (time > 1440)
		{
			printf("���� �ð��� �ִ� 1440���� ���� �� �����ϴ�.\n");

		}

		else if (time < 30)
		{
			m = 2000;
			printf("���� ��� : 2000��\n");
		}

		else if (time > 30)    //���� 30�� �Ѱ�����.
		{
			time = time - 30;
			m = 2000 + ((time + 9) / 10) * 1000;
			m = (m > 25000) ? 25000 : m;
			printf("������� : %d��\n", m);
		}
	}
}
int main()
{
	solve();

	return 0;

}