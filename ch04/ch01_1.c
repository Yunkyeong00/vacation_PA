#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double c;
	float a;
	printf("질량(kg)? ");
	scanf("%f", &a);
	int b;
	printf("속력(m/s)? ");
	scanf("%d",&b);
	c = 1.0 / 2.0 * a * b * b;
	printf("운동에너지: %.2lf J",c);

}