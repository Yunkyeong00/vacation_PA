/* 파일명: ch04-8

   * 내용:

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.141592


void solve()
{
	float a = 0;
	float b = 0;
	float v;


	printf("반지름의 길이? ");
	scanf("%f", &a);

	b = pow(a, 3);
	v = 4.0 / 3.0 * b * PI;

	printf("원기둥의 부피: %f ", v);

}

int main()
{
	solve();

	return 0;

}