/* 파일명: ch05-1

 * 내용: Pro 점의 좌표 (x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.
 *                              스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점애 의해서 결정된다.
 * 작성자:조윤경

 * 날짜: 2025.07. 09

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int nl, nt;
	int nr, nb;
	int x, y;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &nl, &nt);

	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &nr, &nb);

	printf("점의 좌표 (x,y)? ");
	scanf("%d %d", &x, &y);

	if (nl < x && nr > x && nt < y && nb > y)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}

	else
	{
		printf("직사각현 모양의 선택 영역 내의 점이 아닙니다.");
	}

	

}

int main()
{
	solve();

	return 0;
}