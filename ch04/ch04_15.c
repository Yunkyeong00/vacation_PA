/* ���ϸ�: ch04-15

   * ����: �츮�� �˰� �ִ� ȯ���� �Ÿű������̴�. ���� �޷��� ������ ���� �Ÿű������� ������ ȯ�������Ḧ ���ؼ� ȯ���� �����ȴ�.
								 ȯ��������� ȯ��������� ���� �޶�����. ȯ������������ ���ึ �� �̸� ��������, ȯ��������� ������ �ٸ��� å���ȴ�.
								ȯ������������ 1.75%�� ������ �� �ٰ� �����ϰ� ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �� ���ϰ�,
								�����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: ������

   * ��¥: 2025.07.10

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define HWSSR 1.75

void solve()
{
	int currencyRateWonDolor;
	int woodaeRate;
	double rateWonDolor;
	double USD;

	printf("��/�޷� �Ÿű�����?");
	scanf("%d", &currencyRateWonDolor);

	printf("ȯ�������(0~100%)?");
	scanf("%d", &woodaeRate);

	const double s = HWSSR / 100;
	rateWonDolor = currencyRateWonDolor + currencyRateWonDolor * s * (1 - woodaeRate / 100.0);
	printf("�޷� �� �� ȯ���� %lf�Դϴ�.\n", rateWonDolor);

	float c;
	printf("������ �޷�(USD)?");
	scanf("%f", &c);
	USD = rateWonDolor * c;
	printf("USD %.2f �� ��==> KRW %.2f", c, USD);
}


int main()
{
	solve();
	return 0;
}