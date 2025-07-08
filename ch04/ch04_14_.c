#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	printf("기본 요금? ");
	scanf("%f", &a);

	float b;
	printf("월 사용량(kwh)?");
	scanf("%f", &b);

	float result;
	result = a + (b * 190);
	printf("전기 요금: %.f 원", result);

}

int main()
{
	solve();

	return 0;

}