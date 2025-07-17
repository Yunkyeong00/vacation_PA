#include<stdio.h>

void solve()
{
    unsigned int a = 1 << 7;
    unsigned int b = 1 << 15;
    unsigned int c = 1 << 23;
    unsigned int d = 1 << 31;


    printf("7번 비트만 1인 값: %08X %d\n", a, a);
    printf("15번 비트만 1인 값: %08X %d\n", b, b);
    printf("23번 비트만 1인 값: %08X %d\n", c, c);
    printf("31번 비트만 1인 값: %08X %d\n", d, d);

}

int main()
{
    solve();
    return 0;
}