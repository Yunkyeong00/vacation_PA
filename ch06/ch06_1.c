#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_perimete(int a, int b);

void solve(void)
{

    int a;
    printf("가로?");
    scanf("%d", &a);

    int b;
    printf("세로?");
    scanf("%d", &b);

    printf("직사각형 둘레 : %d", get_perimete(a,b));

}

int get_perimete(int a, int b)
{
    return (a + b) * 2;
}

int main()
{

    solve();
    return 0;

}