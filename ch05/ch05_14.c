#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_area_of_square()
{
	float a,b,result;
	printf("구간 단속 소요시간 (분) ");
	scanf("%f", &a);

	printf("구간단속 주행거리 (km/h)? ");
	scanf("%f", &b);


	result = b/(a/60);
	if (result > 100)
	{
		printf("평균 속력은 %.1f km/h 입니다.구간 단속 과속입니다.", result);
	}
}

int main()
{
	get_area_of_square();

	return 0;
}
