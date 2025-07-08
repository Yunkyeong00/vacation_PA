/* 파일명: ch04-5

   * 내용: 

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

void solve()
{
	float a;
	printf("반지름의 길이? ");
	scanf("%f", &a);

	float b;
	printf("높이? ");
	scanf("%f", &b);

	float c;
	c = a * a * PI * b;
	printf("원기둥의 부피: %f ", c);

}

int main()
{
	solve();

	return 0;

}