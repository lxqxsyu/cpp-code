#include <stdio.h>

int main(void)
{
    int x = 10;

    printf("十进制：%d, 八进制：%o, 十六进制：%x\n", x, x, x);
    printf("十进制：%d, 八进制：%#o, 十六进制：%#x\n", x, x, x);

    return 0;
}