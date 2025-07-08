#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void slove()
{
	int a;
	printf("±Ê¿Ã(ld)? ");

	scanf("%d", &a);

	printf("%d ld = %f kg\n", a, a*0.45359237);

}

int main()
{
	slove();

	return 0;
}
