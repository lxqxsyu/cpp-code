#include <stdio.h>
#include <string.h>

#define SIZE 80

void fit(char *, unsigned int);
void testStrcat();

int main(void)
{
    //char str1[] = "abcdefghijklmnopqrstuvwxyz";
    //puts(str1);
    //fit(str1, 10);
    //puts(str1);
    //puts(str1 + 11);
    
    testStrcat();

    return 0;
}


/*缩短字符串长度*/

void fit(char * string, unsigned int size)
{
    if(strlen(string) > size)
        //string[size] = '\0';
        *(string + size) = '\0';
}


/* 字符串拼接 */
void testStrcat(){

    char str1 [] = "str1";
    //char * str1 = "str1";
    //char str2 [] = "str2";
    //char * str2 = "str2";
    const char str2[] = "str2";

    strcat(str1, str2);

    puts(str1);
    puts(str2);
}

