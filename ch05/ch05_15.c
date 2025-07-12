#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void totalmoney()
{
	float money, hour,day;
	int num;
	printf("시간당 급여? ");
	scanf("%f",&money);

	printf("일일 근무 시간? ");
	scanf("%f", &hour);

	printf("한달 근무 일수? ");
	scanf("%f", &day);

	printf("세금 적용 여부 0:미적용 1:4대보험공제(8.41%),2:소득세공제(3.3%)? ");
	scanf("%d", &num);

	double total = money * day * hour;

	switch (num)
	{
	case 0:
	{
			printf("예상 월급여: %.lf", total);
			break;
	}
	case 1:
	{
			printf("예상 월급여: %.lf", total-(total*0.0841));
			break;
	}
	case 2:
	{
			printf("예상 월급여: %.lf", total-(total*0.033));
			break;
	}
		
	}
}

int main()
{
	totalmoney();

	return 0;
}