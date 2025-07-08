/* 파일명: ch04-3

   * 내용: 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하시오.
           질량은 g 단위로 입력받고, 부피는 cm^3 단위로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.07.08

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void solve()
{
	float a;
	printf("질량(g)?");
	scanf("%f", &a);
	float b;
	printf("부피(세제곱센티미터)?");
	scanf("%f", &b);
	double c;
	c = a / b;
	printf("밀도: %lf", c);

}

int main()
{
	solve();

	return 0;
}