#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double c;
	float a;
	printf("����(kg)? ");
	scanf("%f", &a);
	int b;
	printf("�ӷ�(m/s)? ");
	scanf("%d",&b);
	c = 1.0 / 2.0 * a * b * b;
	printf("�������: %.2lf J",c);

}