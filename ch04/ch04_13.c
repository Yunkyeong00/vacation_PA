#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void solve()
{
	float a, b;
	printf("직선의 시작점 (x1, y1)? ");
	scanf("%f %f", &a,&b);

	float c, d;
	printf("직선의 끝점 (x1, y2)? ");
	scanf("%f %f", &c, &d);

	float result, num;
	num = (a - c) * (a - c) + (b - d) * (b - d);
	result = sqrt(num);
	printf("직선의 길이: %f", result);

}

int main()
{
	solve();

	return 0;

}