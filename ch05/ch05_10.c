//이 문제 반복문을 사용하라고 했는데 반복문을 어디서 사용해야하는지 모르겠습니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void solve()
{
	int a;//금액 입력
	int b;//절사단위 
	int d, e;

	printf("금액? ");
	scanf("%d", &a);
	
	printf("절사단위(10의 지수승)? ");
	scanf("%d", &b);

	int c = pow(10, b);

	e = a % c;
	d = a - e;

	printf("금액(%d 미만 절사): %d",c, d);


}

int main()
{
	solve();
	return 0;
}