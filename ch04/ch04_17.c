#include<stdio.h>

void solve()
{
    unsigned int a = 1 << 7;
    unsigned int b = 1 << 15;
    unsigned int c = 1 << 23;
    unsigned int d = 1 << 31;


    printf("7�� ��Ʈ�� 1�� ��: %08X %d\n", a, a);
    printf("15�� ��Ʈ�� 1�� ��: %08X %d\n", b, b);
    printf("23�� ��Ʈ�� 1�� ��: %08X %d\n", c, c);
    printf("31�� ��Ʈ�� 1�� ��: %08X %d\n", d, d);

}

int main()
{
    solve();
    return 0;
}