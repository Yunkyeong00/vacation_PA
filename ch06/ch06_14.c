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
		printf("날짜 (연 월 일)? ");
		scanf("%d %d %d",&year ,&month ,&day );

		if (check_date(year, month, day) == 0)
		{
			printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
		}
		else
		{
			printf("입력하신 날짜는 %d년 %d월 %d일입니다.\n", year, month, day);

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