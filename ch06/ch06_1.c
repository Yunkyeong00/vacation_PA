#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_perimete(int a, int b);

void solve(void)
{

    int a;
    printf("����?");
    scanf("%d", &a);

    int b;
    printf("����?");
    scanf("%d", &b);

    printf("���簢�� �ѷ� : %d", get_perimete(a,b));

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