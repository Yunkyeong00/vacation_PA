#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_area_of_square()
{
	float a,b,result;
	printf("���� �ܼ� �ҿ�ð� (��) ");
	scanf("%f", &a);

	printf("�����ܼ� ����Ÿ� (km/h)? ");
	scanf("%f", &b);


	result = b/(a/60);
	if (result > 100)
	{
		printf("��� �ӷ��� %.1f km/h �Դϴ�.���� �ܼ� �����Դϴ�.", result);
	}
}

int main()
{
	get_area_of_square();

	return 0;
}
