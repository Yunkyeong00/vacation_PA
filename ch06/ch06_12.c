#include <stdio.h>

int is_leap_year();

int main()
{
	print();
	return 0;
}

int print()
{
	printf("%d", is_leap_year());

}

int is_leap_year()
{
	printf("2000~2100»çÀÌÀÇ À±³â\n");
	int i;
	int count=0;
	for (i=2000; i < 2096; i++)
	{
		
		if (i % 4 == 0)
		{
			printf("%d ", i); 
			count++;

			if (count % 10 == 0)
			{
				printf("\n");
			}
		}
	}
}