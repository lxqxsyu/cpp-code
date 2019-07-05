#include <stdio.h>
#define STLEN 81

int main(void)
{
    char words[STLEN];

    puts("输入一串字符串：");

    gets(words);

    printf("输出内容：\n");
    
    printf("%s\n", words);

    puts(words);

    return 0;
}