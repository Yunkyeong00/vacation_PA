#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	printf("이동거리(km)? ");
	scanf("%f", &a);

	float b;
	printf("예상 속력(km/h)? ");
	scanf("%f", &b);

	float c;
	c = (a / b) * 60;
	printf("도착까지 예상 소요 시간은 %.f분 입니다.",c);

}

int main()
{
	solve();

	return 0;

}