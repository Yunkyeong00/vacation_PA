/* ���ϸ�: ch05-1

 * ����: Pro ���� ��ǥ (x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *                              ��ũ�� ���� ���� ������ ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ�.
 * �ۼ���:������

 * ��¥: 2025.07. 09

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int nl, nt;
	int nr, nb;
	int x, y;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &nl, &nt);

	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &nr, &nb);

	printf("���� ��ǥ (x,y)? ");
	scanf("%d %d", &x, &y);

	if (nl < x && nr > x && nt < y && nb > y)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}

	else
	{
		printf("���簢�� ����� ���� ���� ���� ���� �ƴմϴ�.");
	}

	

}

int main()
{
	solve();

	return 0;
}