#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void slove()
{
	float a, b;

	printf("½Ç¼ö 2°³? ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);

}

int main()
{
	slove();

	return 0;
}

