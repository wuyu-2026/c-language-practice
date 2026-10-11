#include <stdio.h>

int reverse_num(int n)
{
    int flag = 0;
    if(n < 0)
    {
        flag = 1;
        n = -n;   
    }
    int res = 0;
    while(n != 0)
    {
        int digit = n % 10;
        res = res * 10 + digit;
        n = n / 10;
    }
    if(flag)
        res = -res;
    return res;
}

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d\n", reverse_num(num));
    return 0;
}

