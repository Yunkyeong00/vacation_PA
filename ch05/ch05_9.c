/* ���ϸ�: ch05-9

 * ����: �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�. �ܹ��Ŵ� 4000��, �ݶ�� 1500��, ����Ƣ���� 2000���̰�,
 *		�� ������ ��Ʈ�� �ֹ��ϸ� 6500���̶�� ����. �ܹ���, �ݶ�, ����Ƣ���� ������ �Է¹޾Ƽ� �ִ��� ��Ʈ�� �����ϰ�,
 *		�������� ��ǰ���� ����ϵ��� �Ѵ�. ���� ��� �ܹ��� 2, �ݶ� 1, ����Ƣ�� 3�� �ֹ��ϸ�
 *		����� ��Ʈ 1, �ܹ��� 1, ����Ƣ�� 2�� �ؾ��Ѵ�.

 * �ۼ���:������

 * ��¥: 2025.4. 29

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int solve()
{
	int ham = 0;
	int potato = 0;
	int cola = 0;
	int set = 0;

	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");


	printf("�Թ��� ����?");
	scanf("%d", &ham);
	printf("����Ƣ�� ����?");
	scanf("%d", &potato);
	printf("�ݶ� ����?");
	scanf("%d", &cola);

	set = ham < cola ? ham : cola;
	set = set < potato ? set : potato;

	ham -= set;
	potato -= set;

	printf("\n\n��ǰ��	    	 �ܰ�	����	     �ݾ�\n");
	printf("��Ʈ		6500	 %d	     %d\n", set, set * 6500);
	printf("�ܹ���		4000	 %d	     %d\n", ham, ham * 4000);
	printf("����Ƣ��	2000	 %d	     %d\n", potato, potato * 4000);
	printf("----------------------------------------------\n");
	printf("�հ�		     	       	%d", (set * 6500) + (ham * 4000) + (potato * 2000));

}

int main()
{
	solve();
	return 0;
}
