/* ���ϸ�: ch02-2

   * ����: �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

   * �ۼ���: ������

   * ��¥: 2025.7.10

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
    int num;
    float score;

    printf("��ȣ?\n");
    scanf("%d", &num);

    printf("����?\n");
    scanf("%f", &score);

    printf("%d�� �л��� ������ %f�Դϴ�.\n", num, score);

}

int main()
{
    solve();
    return 0;
}