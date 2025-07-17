#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_quadrant(int X, int Y);

int main()
{
	print();

	return 0;
}

int print()
{
	while (1)
	{
		int X,Y;
		printf("점의 좌표 (x,y)? ");
		scanf("%d %d", &X, &Y);

		if (get_quadrant(X, Y) == 0)
		{
			break;
		}

		printf("%d사분면의 점입니다.\n", get_quadrant(X, Y));

		
	}
}

int get_quadrant(int X, int Y)
{
	if (X > 0 && Y > 0)
	{
		return 1;
	}

	if (X < 0 && Y > 0)
	{
		return 2;
	}

	if (X < 0 && Y < 0)
	{
		return 3;
	}

	if (X > 0 && Y < 0)
	{
		return 4;
	}

	if (X == 0 || Y == 0)
	{
		return 0;
	}

}
