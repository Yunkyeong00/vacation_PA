#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	char b;
	float result;

	printf("����? ");
	scanf("%f %c", &a,&b);

	if (b == 'm')
	{
		result = a * 0.3025;
		printf("%f �������� == %f �� ",a,result);
	}
	else
	{
		result = a * 3.305785;
		printf("%f �� == %f �������� ", a, result);
	}
}

int main()
{
	solve();

	return 0;
}