#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void totalmoney()
{
	float money, hour,day;
	int num;
	printf("�ð��� �޿�? ");
	scanf("%f",&money);

	printf("���� �ٹ� �ð�? ");
	scanf("%f", &hour);

	printf("�Ѵ� �ٹ� �ϼ�? ");
	scanf("%f", &day);

	printf("���� ���� ���� 0:������ 1:4�뺸�����(8.41%),2:�ҵ漼����(3.3%)? ");
	scanf("%d", &num);

	double total = money * day * hour;

	switch (num)
	{
	case 0:
	{
			printf("���� ���޿�: %.lf", total);
			break;
	}
	case 1:
	{
			printf("���� ���޿�: %.lf", total-(total*0.0841));
			break;
	}
	case 2:
	{
			printf("���� ���޿�: %.lf", total-(total*0.033));
			break;
	}
		
	}
}

int main()
{
	totalmoney();

	return 0;
}