#include <stdio.h>

int main(void)
{
    char ch;
    //while((ch = getchar()) != '#'){
    while((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}


//Input: i am shuihan, this is my blog # haha
//Output: i am shuihan, this is my blog 