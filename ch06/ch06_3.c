#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


double distance(float a, float b, float c, float d)
{
    return sqrt((c - a) * (c - a) + (d - b) * (d - b));
}


int main()
{
    float a, b, c, d;
    printf("������ ������ ��ǥ?");
    scanf("%f %f", &a, &b);

    printf("������ ���� ��ǥ?");
    scanf("%f %f", &c, &d);

    double result = distance(a, b, c, d);
    result = sqrt((c - a) * (c - a) + (d - b) * (d - b));

    printf("(%.0f, %.0f)~(%.0f, %.0f) ������ ����: %.6f\n", a, b, c, d, result);


    return 0;

}