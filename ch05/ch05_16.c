#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void solve()
{
	int a;
	printf("���� ����? ");
	scanf("%d", &a);

	int b,num=0;
	printf("����� ����? ");
	scanf("%d", &b);

	for (int i = 1; i <= b; i++)
	{
		num = num + 5;
		printf("%d ",num);
	}
}


int main()
{
	solve();
	return 0;
}


