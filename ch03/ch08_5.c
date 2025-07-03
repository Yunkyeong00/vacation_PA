#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void slove()
{
	float a;
	float b;
	printf("±Ê¿Ã(inch)?");

	scanf("%f", &a);
	b = a * 2.54;
	printf("%f inch=%f cm", a, b);


int main()
{
	slove();

	return 0;
}


