#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void slove()
{
	float a, b;

	printf("�Ǽ� 2��? ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);

}

int main()
{
	slove();

	return 0;
}

