/* 파일명: ch04-6

   * 내용:

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a, b;
	printf("한 점의 좌표 (x1 ,y1)? ");
	scanf("%f %f", &a, &b);

	float c, d;
	printf("또 다른 점의 좌표 (x2 ,y2)? ");
	scanf("%f %f", &c, &d);

	float m;
	m = (d - b) / (c - a);
	printf("직선의 기울기: %f ", m);

}

int main()
{
	solve();

	return 0;

}