/* ���ϸ�: ch04-2

   * ����: ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ������ ������ ����.

   * �ۼ���: ������

   * ��¥: 2025.07.08

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
    float f;
    float c;
    printf("ȭ�� �µ�?");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9.0);
    printf("%.2f F=%.2f C", f, c);

}

int main()
{
    solve();
    return 0;
}