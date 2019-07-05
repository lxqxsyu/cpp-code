#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE * fp;
    char fname[50];  //存储文件名

    printf("输入文件名：");
    scanf("%s", fname);

    fp = fopen(fname, "r");

    if(fp == NULL)
    {
        printf("打开文件失败");
        exit(1);  //退出程序
    }

    while((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);         //关闭文件

    return 0;
}