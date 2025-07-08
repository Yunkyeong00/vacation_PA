/* 파일명: ch04-7

   * 내용:

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void solve()
{
	float a = 0;
	printf("밑면? ");
	scanf("%f", &a);

	float b = 0;
	printf("높이? ");
	scanf("%f", &b);

	float c = 0;
	c = (a * a) + (b * b);
	c = sqrt(c);
	printf("원기둥의 부피: %f ", c);

}

int main()
{
	solve();

	return 0;

}