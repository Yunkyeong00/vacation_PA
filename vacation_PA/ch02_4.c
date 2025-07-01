#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void slove()
{
	int a, b, c;
	printf("시?");
	scanf("%d", &a);
	printf("분?");
	scanf("%d", &b);
	printf("초?");
	scanf("%d", &c);
	printf("입력한 시간은 %02d:%02d:%02d 입니다.", a, b, c);
}

int main()
{
	slove();

	return 0;
}

