/* 파일명: ch05-1

 * 내용:이차원 평면에 있는 점의 좌표(X,Y)를 입력받아 
        어느 사분면의 점인지 출력하는 프로그램을 작성하시오.
 * 
 * 작성자:조윤경

 * 날짜: 2025.07. 09

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solve()
{
	int x;
	int y;

	printf("점의 좌표(x,y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1사분면에 있습니다");

	else if (x < 0 && y>0)
		printf("2사분면에 있습니다");

	else if (x < 0 && y<0)
		printf("3사분면에 있습니다");

	else if (x > 0 && y<0)
		printf("4사분면에 있습니다");

}

int main()
{
	solve();
	return 0;
}
