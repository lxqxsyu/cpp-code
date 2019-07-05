#include <stdio.h>

int main(void)
{
    char ch;
    //while((ch = getchar()) != '#'){
    while((ch = getchar()) != EOF) //按 Enter 或者 Ctrl + D 结束输入
    {
        putchar(ch);
    }
    return 0;
}


//Input: i am shuihan, this is my blog # haha
//Output: i am shuihan, this is my blog 