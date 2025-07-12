#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double get_perimete(double a);

void solve(void)
{

    double a;
    printf("한 변의 길이? ");
    scanf("%lf", &a);

    printf("정사각형 면적: %lf ", get_perimete(a));

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
