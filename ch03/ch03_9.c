#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void slove()
{
	int a;
	float b;
	printf("±Ê¿Ã(ld)? ");

	scanf("%d", &a);
	b = a * 0.45359237;

	printf("%d ld = %f kg\n", a, b);

}

int main()
{
	slove();

	return 0;
}
