#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double get_perimete(double a);

void solve(void)
{

    double a;
    printf("�� ���� ����? ");
    scanf("%lf", &a);

    printf("���簢�� ����: %lf ", get_perimete(a));

}

double get_perimete(double a)
{
    return a * a;
}

int main()
{

    solve();
    return 0;

}
