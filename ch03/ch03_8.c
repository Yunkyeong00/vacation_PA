#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void slove()
{
	int a;
	float b;
	printf("±Ê¿Ã(yd)? ");

	scanf("%d", &a);
	b = a * 0.9144;

	printf("%d yd = %f m\n", a, b);

}

int main()
{
	slove();

	return 0;
}
