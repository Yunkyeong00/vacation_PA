#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(void);

void solve()
{
	while (1)
	{
		int menu;
		menu = choose_menu();

		switch (menu)
		{
		case 1:

			printf("���� ���⸦ �����մϴ�.\n");
			break;

		case 2:
			printf("���� ������ �����մϴ�.\n");
			break;

		case 3:
			printf("�μ⸦ �����մϴ�.\n");
			break;
		case 0:
			printf("���α׷��� �����մϴ�.\n");
			return 0;
		}
	}
}

int choose_menu(void)
{
	int menu;
	printf("[1.���Ͽ��� 2.���� ���� 3.�μ� 0.����] ����?");
	scanf("%d", &menu);

	return menu;
}

int main()
{
	solve();

	return 0;
}
