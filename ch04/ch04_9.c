#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a;
	int hour, minute, second;

	printf("����ð�(��)?");
	scanf("%d", &a);

	
	minute = a / 60;
	hour = minute / 60;
	minute = minute % 60;
	second = a % 60;

	if (hour == 0)
	{
		printf("����ð��� %d�� %d�� �Դϴ�.\n", minute, second);
	}
	if (minute == 0)
	{
		printf("����ð��� %d�� %d�� �Դϴ�.\n", minute, second);
	}
	if(second==0)


}

int main()
{
	solve();
	return 0;
}