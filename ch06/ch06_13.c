#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_days_of_month(int i);

int main()
{
    print();
	return 0;

}

int print()
{
    int year,count = 0;
    printf("연도? ");
    scanf("%d", &year);
    printf("[ %d 년]\n", year);

    for (int i = 1; i <= 12; i++)
        {
             printf("%d월: %d일 ",i, get_days_of_month(i));
            count++;

            if (count % 6 == 0)
            {
                  printf("\n");
            }
    
        }
}

int get_days_of_month(int i)
{
    switch (i)
    {
        case 1:
            return 31;
        case 2:
            return 29;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
      
    }
}

/*#include <stdio.h>

int main()
{
    for (int i = 2; i <= 9; i++)
    {
        printf("== %d단 ==\n", i);

        for (int a = 1; a <= 9;a++)
        {
            printf("%d x %d = %d\n", i, a, i * a);
        }
        printf("\n");
    }
}*/