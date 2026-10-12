#include <stdio.h>

// ptr：字符串起始指针
void turnStr(char *ptr)
{
    char *pEnd = ptr;
    // 指针移动到字符串末尾'\0'前一个字符
    while(*pEnd != '\0')
    {
        pEnd++;
    }
    pEnd--;

    // 头尾指针相向移动交换
    while(ptr < pEnd)
    {
        char t = *ptr;
        *ptr = *pEnd;
        *pEnd = t;
        ptr++;
        pEnd--;
    }
}

int main(void)
{
    char str[] = "abcd";
    turnStr(str);
    printf("%s\n", str); //输出 dcba
    return 0;
}
