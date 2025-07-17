/* ���ϸ�: ch04-16

   * ����: ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, green, blue�� 8��Ʈ���� ����ؼ� ������ ǥ���ϹǷ� 24��Ʈ Ʈ���÷���� �Ѵ�.
								 ��ǻ�� �ý��ۿ����� 32��Ʈ �������� �� ���� ����Ʈ���� red, green, blue�� ������ ���� ������ �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ� 0���� ä���.
								 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB �� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
								 RGB ������ ����� ���� ����Ʈ ������ �˾ƺ��� ������ 16������ ����Ѵ�.
   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve();

/*
void solve()
{
	unsigned char red, green, blue;

	printf("red?");
	scanf("%hhu", &red);

	printf("green?");
	scanf("%hhu", &green);

	printf("blue?");
	scanf("%hhu", &blue);

	printf("RGB Ʈ���÷�:%02X%02X%02X", blue,green,red);


}
*/

int main()
{
	solve();
	return 0;
}


void solve()
{
	unsigned char red, green, blue;

	printf("red?");
	scanf("%hhu", &red);

	printf("green?");
	scanf("%hhu", &green);

	printf("blue?");
	scanf("%hhu", &blue);


	red = red % 256;
	green = green % 256;
	blue = blue % 256;

	printf("RGB Ʈ���÷�:%02X%02X%02X", blue, green, red);


}