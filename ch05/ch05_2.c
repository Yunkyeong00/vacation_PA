/* ���ϸ�: ch05-1

 * ����:������ ��鿡 �ִ� ���� ��ǥ(X,Y)�� �Է¹޾� 
        ��� ��и��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * 
 * �ۼ���:������

 * ��¥: 2025.07. 09

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solve()
{
	int x;
	int y;

	printf("���� ��ǥ(x,y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1��и鿡 �ֽ��ϴ�");

	else if (x < 0 && y>0)
		printf("2��и鿡 �ֽ��ϴ�");

	else if (x < 0 && y<0)
		printf("3��и鿡 �ֽ��ϴ�");

	else if (x > 0 && y<0)
		printf("4��и鿡 �ֽ��ϴ�");

}

int main()
{
	solve();
	return 0;
}
