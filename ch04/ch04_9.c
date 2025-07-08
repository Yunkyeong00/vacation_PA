#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a;
	int hour, minute, second;

	printf("재생시간(초)?");
	scanf("%d", &a);

	minute = a / 60;
	hour = minute / 60;
	minute = minute % 60;
	second = a % 60;
	printf("재생시간은 %d시간 %d분 %d초 입니다.\n", hour, minute, second);


}

int main()
{
	solve();
	return 0;
}