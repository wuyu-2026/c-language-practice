#include <stdio.h>
#include <stdbool.h>

bool canWinNim(int n)
{
    return n % 4 != 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if(canWinNim(n))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}
