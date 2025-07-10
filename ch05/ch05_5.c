/* 파일명: ch05-5

 * 내용: 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오.
								"27 C" 또는 27 F"처럼 온도를 입력받을 때 섭씨인지 화씨인지 구분할 수 있는 문자를 함께 입력받는다.
								함께 입력된 문자가 'C'면 섭씨 온도이므로 화씨 온도를 구해서 출력하고,
								입력된 문자가 'F'면 화씨 온도이므로 섭씨 온도를 구해서 출력한다.
 * 작성자:조윤경

 * 날짜: 2025.7.09

 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void solve()
{
	char b;
	float a;
	float result;

	printf("온도? ");
	scanf("%f %c", &a, &b);

	if (b == 'C')
	{
		result = (a * 9.0 / 5.0) + 32.0;
		printf("%.2f %c = %.2f F",a,b,result);
	}

	else
	{
		result = (a - 32.0) * 9.0 / 5.0;
		printf("%.2f %c = %.2f C", a, b, result);
	}
}


int main()
{
	solve();

	return 0;

}