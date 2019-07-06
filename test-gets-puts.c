#include <stdio.h>
#define STLEN 81

int main(void)
{
    char words[STLEN];

    puts("输入一串字符串：");

    //gets(words); C11 中去掉
    //gets_s(words, STLEN);
    fgets(words, STLEN, stdin);

    printf("输出内容：\n");
    
    printf("%s\n", words);

    puts(words);

    return 0;
}