//�� ���� �ݺ����� ����϶�� �ߴµ� �ݺ����� ��� ����ؾ��ϴ��� �𸣰ڽ��ϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void solve()
{
	int a;//�ݾ� �Է�
	int b;//������� 
	int d, e;

	printf("�ݾ�? ");
	scanf("%d", &a);
	
	printf("�������(10�� ������)? ");
	scanf("%d", &b);

	int c = pow(10, b);

	e = a % c;
	d = a - e;

	printf("�ݾ�(%d �̸� ����): %d",c, d);


}

int main()
{
	solve();
	return 0;
}