#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	print();

	return 0;
}

int print()
{
	while (1)
	{
		int year, month, day;
		printf("��¥ (�� �� ��)? ");
		scanf("%d %d %d",&year ,&month ,&day );

		if (check_date(year, month, day) == 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.\n");
		}
		else
		{
			printf("�Է��Ͻ� ��¥�� %d�� %d�� %d���Դϴ�.\n", year, month, day);

			break;

		}


	}

}

int check_date(int year,int month, int day)
{
	if (year == 2022 && month == 1 && day == 1)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}