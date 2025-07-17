#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned char get_red(int color);
unsigned char get_green(int color);
unsigned char get_blue(int color);

int main()
{

    unsigned int color;
    unsigned char color_r = 0, color_g = 0, color_b = 0;

    printf("RGB ����? ");
    scanf("%x", &color);

    get_red(color);
    get_green(color);
    get_blue(color);

    printf("RGB %06X�� red: %d, green: %d, blue: %d", color, get_red(color), get_green(color), get_blue(color));

    return 0;
}

unsigned char get_red(int color)
{

    unsigned char red = color & 0b11111111;

    return red;
}

unsigned char get_green(int color)
{

    unsigned char green = color >> 8 & 0b11111111;

    return green;
}

unsigned char get_blue(int color)
{

    unsigned char blue = color >> 16 & 0b11111111;

    return blue;
}